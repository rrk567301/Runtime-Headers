@class NSString, NSData;

@interface PKPeerPaymentProfileAppearanceData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSData *imageData;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDisplayName:(id)a0 imageData:(id)a1;

@end
