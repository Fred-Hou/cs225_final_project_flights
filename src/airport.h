<<<<<<< HEAD
#pragma once
#include <string>

using std::string;

class Airport {
  
  public:
    

    /**
     * @brief Default constructor.
     */
    Airport() : name(""), ID(""), latitude(-1), longitude(-1) { 
      // nothing
    }

    /**
     * @brief Parameter constructor for airports.
     * @param nm - airport's name
     * @param id - airport's id
     * @param lat - airport's latitude
     * @param lon - airport's longitude
     */
    Airport(string nm, string id, double lat, double lon)
      : name(nm), ID(id), latitude(lat), longitude(lon) {
        // nothing
    }

    /**
     * @brief Compare two airports.
     * @param other - the airport to compare with
     */
     bool operator==( const Airport& other)  const {

       if (this->name != other.name)
            return false;
        if (this->ID != other.ID)
            return false;
        return true;
     }
     
     bool operator<(const Airport& other) const {
      return ID < other.ID;
    } 

    //  void setName(string n);
    //  void setID(string id);
    //  void setLatitude(double lati);
    //  void setLongitude(double longi);
    //  void setIATA(string ia);
    //  void setICAO(string ic);
    //  string getName() const;
    //  string getID() const;
    //  double getLatitude() const;
    //  double getLongitude() const;
    //  string getIATA() const;
    //  string getICAO() const;

    string name; 
    string ID;
    double latitude;
    double longitude;
   
=======
#pragma once
#include <string>

using std::string;

class Airport {
  
  public:
    string name; 
    string ID;
    double latitude;
    double longitude;

    /**
     * @brief Default constructor.
     */
    Airport() : name(""), ID(""), latitude(-1), longitude(-1) { 
      // nothing
    }

    /**
     * @brief Parameter constructor for airports.
     * @param nm - airport's name
     * @param id - airport's id
     * @param lat - airport's latitude
     * @param lon - airport's longitude
     */
    Airport(string nm, string id, double lat, double lon)
      : name(nm), ID(id), latitude(lat), longitude(lon) {
        // nothing
    }

    /**
     * @brief Compare two airports.
     * @param other - the airport to compare with
     */
    bool operator==(const Airport& other) const {
      if (this->name != other.name) return false;
      if (this->ID != other.ID) return false;
      return true;
    }

    // useless, don't know why
    bool operator<(const Airport& other) const {
      return true;
    } 
>>>>>>> main
};