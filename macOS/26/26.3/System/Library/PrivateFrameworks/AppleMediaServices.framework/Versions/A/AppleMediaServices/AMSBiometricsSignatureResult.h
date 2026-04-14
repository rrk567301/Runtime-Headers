@class NSData, AMSBiometricsSignatureRequest, NSString;

@interface AMSBiometricsSignatureResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) AMSBiometricsSignatureRequest *originalRequest;
@property (retain) NSData *publicKey;
@property (retain) NSString *signature;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
