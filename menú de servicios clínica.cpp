using System;

class Program
{
    static void Main()
    {
        int opcion;

        do
        {
            Console.WriteLine("=== MENÚ DE SERVICIOS DE LA CLÍNICA ===");
            Console.WriteLine("1. Consulta");
            Console.WriteLine("2. Laboratorio");
            Console.WriteLine("3. Rayos X");
            Console.WriteLine("4. Farmacia");
            Console.WriteLine("5. Salir");
            Console.Write("Seleccione una opción: ");

            opcion = Convert.ToInt32(Console.ReadLine());

            switch (opcion)
            {
                case 1:
                    Console.WriteLine("Consulta médica");
                    Console.WriteLine("Precio: $50");
                    Console.WriteLine("Tiempo de espera: 20 minutos");
                    break;

                case 2:
                    Console.WriteLine("Laboratorio");
                    Console.WriteLine("Precio: $30");
                    Console.WriteLine("Tiempo de espera: 40 minutos");
                    break;

                case 3:
                    Console.WriteLine("Rayos X");
                    Console.WriteLine("Precio: $70");
                    Console.WriteLine("Tiempo de espera: 30 minutos");
                    break;

                case 4:
                    Console.WriteLine("Farmacia");
                    Console.WriteLine("Precio: Depende del medicamento");
                    Console.WriteLine("Tiempo de espera: 10 minutos");
                    break;

                case 5:
                    Console.WriteLine("Saliendo del sistema...");
                    break;

                default:
                    Console.WriteLine("Opción inválida. Intente nuevamente.");
                    break;
            }

            Console.WriteLine();

        } while (opcion != 5);
    }
}
