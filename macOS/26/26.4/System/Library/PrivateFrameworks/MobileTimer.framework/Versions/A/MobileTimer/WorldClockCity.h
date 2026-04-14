@class NSString, NSDictionary, NSURL, ALCity, NSNumber;

@interface WorldClockCity : NSObject {
    NSString *_timeZone;
    NSString *_name;
    NSString *_countryName;
    NSString *_countryCode;
    NSString *_unlocalizedName;
    NSString *_unlocalizedCountryName;
}

@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) ALCity *alCity;
@property (readonly, nonatomic) NSNumber *alCityId;
@property (readonly, nonatomic) NSString *timeZone;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *countryName;
@property (readonly, nonatomic) NSString *unlocalizedCityName;
@property (readonly, nonatomic) NSString *unlocalizedCountryName;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSURL *idUrl;

+ (BOOL)isWorldClockCityProperties:(id)a0;
+ (BOOL)isCachedLanguageStaleForProperties:(id)a0;
+ (BOOL)isCachedLanguageStaleForProperties:(id)a0 systemLanguage:(id)a1;
+ (id)unlocalizedExampleCity;

- (id)initWithProperties:(id)a0;
- (id)initWithTimeZone:(id)a0 countryCode:(id)a1 name:(id)a2 countryName:(id)a3 unlocalizedName:(id)a4 unlocalizedCountryName:(id)a5;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithALCityIdentifier:(int)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithALCity:(id)a0;

@end
