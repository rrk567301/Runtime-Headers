@class LASmartCardIdentifier, LASmartCardOneTimePassword;

@interface LASmartCardCredential : NSObject <NSSecureCoding, NSCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) LASmartCardOneTimePassword *oneTimePassword;
@property (nonatomic, readonly) LASmartCardIdentifier *identifier;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 oneTimePassword:(id)a1;

@end
