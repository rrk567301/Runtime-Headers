@class NSString, NSNumber, NSData;

@interface UARPTLVMeasuredPayload : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *payload4cc;
@property (copy) NSString *payloadLongname;
@property long long hashAlgorithm;
@property (copy) NSNumber *effectiveSecurityMode;
@property (copy) NSNumber *effectiveProductionMode;
@property (copy) NSNumber *isTrusted;
@property (copy) NSNumber *digestListSize;
@property (copy) NSData *payloadDigest;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
