import std;

double fahrToCels(double degCels)
{
    return (degCels - 32.) * (5./9.);
}

double celsToFahr(double degFahr)
{
    return degFahr * (9./5.) + 32.;
}

int main()
{
    using namespace std;
    println("Enter degrees: ");

    if (double deg; cin >> deg) {
        println("{}F == {}C", deg, fahrToCels(deg));
        println("{}C == {}F", deg, celsToFahr(deg));
        return 0;
    } else {
        println("Failed to parse degrees.");
        return 1;
    }
}
