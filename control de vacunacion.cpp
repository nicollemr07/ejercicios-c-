using System;

class Program
{
    static void Main()
    {
        int vacunasDia;
        int totalVacunas = 0;
        string[] dias = { "Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado", "Domingo" };

        for (int i = 0; i < dias.Length; i++)
        {
            Console.Write("Ingrese la cantidad de vacunas aplicadas el " + dias[i] + ": ");
            vacunasDia = Convert.ToInt32(Console.ReadLine());

            totalVacunas += vacunasDia; 
        }

        double promedio = (double)totalVacunas / dias.Length;

        Console.WriteLine("\n=== REPORTE SEMANAL DE VACUNACIÓN ===");
        Console.WriteLine("Total de vacunas aplicadas: " + totalVacunas);
        Console.WriteLine("Promedio diario de vacunas: " + promedio);
    }
}
