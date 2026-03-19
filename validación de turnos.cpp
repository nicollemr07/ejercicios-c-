using System;

class Program
{
    static void Main()
    {
        string continuar = "S";

        while (continuar.ToUpper() == "S")
        {
            int turno;

            Console.Write("Ingrese el número de turno del paciente: ");
            turno = int.Parse(Console.ReadLine());

            while (turno <= 0)
            {
                Console.WriteLine("Error: El número de turno debe ser mayor que 0.");
                Console.Write("Ingrese nuevamente el número de turno: ");
                turno = int.Parse(Console.ReadLine());
            }

            Console.WriteLine("Turno registrado correctamente: " + turno);

            Console.Write("¿Desea continuar? (S/N): ");
            continuar = Console.ReadLine();
        }

        Console.WriteLine("Programa finalizado.");
    }
}
