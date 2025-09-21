@class NSString, NSDictionary, NSDate;

@interface _GEOCountryConfigurationInfo : NSObject

@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) unsigned int source;
@property (readonly, nonatomic) NSDate *dateOfLastUpdate;
@property (retain, nonatomic) NSDictionary *metadata;

+ (id)get;
+ (id)countryCode:(id)a0 source:(unsigned int)a1;

- (id)encodeAsDictionary;
- (id)initWithDictionary:(id)a0;
- (id)initWithCountryCode:(id)a0 source:(unsigned int)a1;
- (void)set;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)updateTimestamp;

@end
