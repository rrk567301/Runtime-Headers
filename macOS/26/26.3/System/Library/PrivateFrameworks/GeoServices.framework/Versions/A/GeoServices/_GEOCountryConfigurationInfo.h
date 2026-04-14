@class NSString, NSDictionary, NSDate;

@interface _GEOCountryConfigurationInfo : NSObject

@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) unsigned int source;
@property (readonly, nonatomic) NSDate *dateOfLastUpdate;
@property (retain, nonatomic) NSDictionary *metadata;

+ (id)get;
+ (id)countryCode:(id)a0 source:(unsigned int)a1;

- (void)set;
- (id)description;
- (id)encodeAsDictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithCountryCode:(id)a0 source:(unsigned int)a1;
- (BOOL)isEqual:(id)a0;
- (void)updateTimestamp;

@end
