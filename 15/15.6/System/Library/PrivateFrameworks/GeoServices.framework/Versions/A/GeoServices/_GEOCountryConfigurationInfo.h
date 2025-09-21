@class NSString, NSDate;

@interface _GEOCountryConfigurationInfo : NSObject {
    unsigned int _source;
    NSString *_countryCode;
    NSDate *_dateOfLastUpdate;
}

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
