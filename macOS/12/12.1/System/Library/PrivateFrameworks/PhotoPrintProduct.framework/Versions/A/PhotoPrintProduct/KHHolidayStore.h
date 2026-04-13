@class NSSet, NSMutableDictionary, NSDictionary;

@interface KHHolidayStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *holidaysCache;
@property (copy, nonatomic) NSSet *countryCodes;
@property (copy, nonatomic) NSDictionary *holidayCalendarURLStrings;

+ (id)_typeListForCountryWithCountryCode:(id)a0;
+ (id)_holidayTypesFromFile;

- (id)init;
- (void).cxx_destruct;
- (id)_holidaysCalendarURLForCountryWithCountryCode:(id)a0;
- (id)_parseCalendarWithReferenceURL:(id)a0 type:(unsigned long long)a1 typeListForCountry:(id)a2;
- (id)_fetchCalendarDataFromURL:(id)a0;
- (id)holidaysForCountryWithCountryCode:(id)a0 type:(unsigned long long)a1;

@end
