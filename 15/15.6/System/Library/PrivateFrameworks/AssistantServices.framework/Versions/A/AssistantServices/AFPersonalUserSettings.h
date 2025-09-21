@class NSString;

@interface AFPersonalUserSettings : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *temperatureUnit;
@property (nonatomic) char twentyFourHourTimeDisplay;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *preferredLanguage;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
