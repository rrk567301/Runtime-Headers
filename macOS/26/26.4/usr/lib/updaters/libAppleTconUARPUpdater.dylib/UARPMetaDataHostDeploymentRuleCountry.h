@class NSString, NSDate;

@interface UARPMetaDataHostDeploymentRuleCountry : UARPMetaData {
    unsigned long long _untilYear;
    unsigned long long _untilMonth;
    unsigned long long _untilDay;
}

@property (readonly) NSString *countryCode;
@property (readonly) NSDate *untilDate;

- (BOOL)initWithDict:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)tlvValue;
- (BOOL)initWithDaysFromNow:(id)a0;
- (id)initWithLength:(unsigned long long)a0 value:(void *)a1;
- (id)initWithPropertyListValue:(id)a0 relativeURL:(id)a1;

@end
