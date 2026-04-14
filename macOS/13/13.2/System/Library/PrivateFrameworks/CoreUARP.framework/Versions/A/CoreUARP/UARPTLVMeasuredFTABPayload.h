@class NSString;

@interface UARPTLVMeasuredFTABPayload : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *payload4cc;
@property (copy) NSString *payloadLongname;
@property long long hashAlgorithm;
@property BOOL effectiveSecurityMode;
@property BOOL effectiveProductionMode;
@property BOOL isTrusted;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
