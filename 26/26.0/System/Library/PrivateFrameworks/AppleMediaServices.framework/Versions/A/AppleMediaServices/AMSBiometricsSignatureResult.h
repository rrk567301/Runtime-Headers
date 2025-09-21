@class NSData, AMSBiometricsSignatureRequest, NSString;

@interface AMSBiometricsSignatureResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) AMSBiometricsSignatureRequest *originalRequest;
@property (retain) NSData *publicKey;
@property (retain) NSString *signature;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
