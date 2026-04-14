@class NSData;

@interface AAAdvertisementPayload : NSObject

@property (readonly, nonatomic) NSData *payloadData;
@property (readonly) unsigned char type;

+ (id)advertisementPayloadWithData:(id)a0;

- (unsigned long long)hash;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)describeProperties;
- (void)initLogParseError:(char *)a0;
- (BOOL)isEqualToPayload:(id)a0;

@end
