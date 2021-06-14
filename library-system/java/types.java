public enum BookFormat {
    Hardcover,
    Paperback,
    AudioBook,
    Ebook,
    Newspaper,
    Magazine,
    Journal
}

public enum BookStatus {
    Available,
    Reserved,
    Loaned,
    Lost
}

public enum ReservationStatus {
    Waiting,
    Pending,
    Completed,
    Canceled,
    None
}

public enum AccountStatus {
    Active,
    Closed,
    Canceled,
    Blacklisted,
    None
}


public class Address {
    String streetAddress;
    String city;
    String state;
    String zipcode;
    String country;
    String googlePlaceId;
}

public class Person {
    String name;
    String email;
    Address address;
    String phone;    
}

public class Constants {
  public static final int MAX_BOOKS_ISSUED_TO_A_USER = 5;
  public static final int MAX_LENDING_DAYS = 10;
}
