@interface CBApplePayloadTypeInfo : NSObject <CUXPCCodable>

@property (nonatomic) unsigned char applePayloadType;
@property (nonatomic) char rssiThreshold;
@property (nonatomic) unsigned char maxAge;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;

@end
