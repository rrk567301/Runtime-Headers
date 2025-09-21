@class NSData;

@interface AAAdvertisementPayload : NSObject

@property (readonly, nonatomic) NSData *payloadData;
@property (readonly) unsigned char type;

+ (id)advertisementPayloadWithData:(id)a0;

- (id)initWithData:(id)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)describeProperties;
- (void)initLogParseError:(char *)a0;
- (BOOL)isEqualToPayload:(id)a0;

@end
