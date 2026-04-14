@class LASmartCardIdentifier, LASmartCardOneTimePassword;

@interface LASmartCardCredential : NSObject <NSSecureCoding, NSCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) LASmartCardOneTimePassword *oneTimePassword;
@property (nonatomic, readonly) LASmartCardIdentifier *identifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 oneTimePassword:(id)a1;

@end
