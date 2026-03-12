using System;

class Program
{
    static void Main()
    {
        double temperatura;
        int presion;

      
        Console.Write("Ingrese la temperatura corporal (°C): ");
        temperatura = Convert.ToDouble(Console.ReadLine());

        Console.Write("Ingrese la presión : ");
        presion = Convert.ToInt32(Console.ReadLine());

        
        if (temperatura > 39 || presion > 180)
        {
            Console.WriteLine("🔴 TRIAJE ROJO (Crítico)");
            Console.WriteLine("Recomendación: Atención médica inmediata.");
        }
        else if (temperatura > 38 || presion > 140)
        {
            Console.WriteLine("🟡 TRIAJE AMARILLO (Urgente)");
            Console.WriteLine("Recomendación: El paciente debe ser evaluado pronto por un médico.");
        }
        else
        {
            Console.WriteLine("🟢 TRIAJE VERDE (Estable)");
            Console.WriteLine("Recomendación: El paciente puede esperar atención médica regular.");
        }
    }
}
