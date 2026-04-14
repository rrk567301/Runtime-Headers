@class NSString;

@interface EMParsecInstantAnswers : NSObject

@property (class, copy) NSString *bundleIdentifier;

+ (id)log;
+ (id)flightInformationWithAirlineCode:(id)a0 flightNumber:(id)a1 flightDate:(id)a2;
+ (id)dictionaryFromTimezone:(id)a0;
+ (id)formattedDate:(id)a0 withTimezone:(id)a1;
+ (id)sfAirportToDictionnary:(id)a0;
+ (id)sfFlightStatusToString:(int)a0;
+ (id)sfFlightsToDictionary:(id)a0;
+ (id)_dateComponentsForDate:(id)a0 inTimeZone:(id)a1;
+ (id)_flightArrivalDateFromUpdatedFlightInformation:(id)a0;
+ (id)_flightDepartureDateFromUpdatedFlightInformation:(id)a0;
+ (id)flightArrivalDateComponentsFromUpdatedFlightInformation:(id)a0 arrivalTimeZone:(id)a1;
+ (id)flightDepartureDateComponentsFromUpdatedFlightInformation:(id)a0 departureTimeZone:(id)a1;
+ (id)flightURLFromUpdatedFlightInformation:(id)a0;
+ (id)inlineCardWithManageReservationButton:(BOOL)a0 bodyCardSectionID:(id)a1 buttonsCardSectionID:(id)a2;
+ (id)updatedFlightInformationForInstantAnswer:(id)a0;
+ (id)utcFormatter;

@end
