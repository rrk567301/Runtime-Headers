@class NSData;

@interface SEEndPointSignatureResponse : NSObject <NSSecureCoding, SESEndPointSignature>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSData *signedData;
@property (retain, nonatomic) NSData *signature;

+ (id)responseWithSignedData:(id)a0 signature:(id)a1;
+ (id)signature:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
