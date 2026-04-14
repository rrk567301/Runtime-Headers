@interface CBApplePayloadTypeInfo : NSObject <CUXPCCodable>

@property (nonatomic) unsigned char applePayloadType;
@property (nonatomic) char rssiThreshold;
@property (nonatomic) unsigned char maxAge;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (unsigned long long)hash;
- (void)encodeWithXPCObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
