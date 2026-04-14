@class NSString;

@interface PKExpressTransactionBannerServiceRequest : PKBannerServiceRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *passUniqueIdentifier;

+ (id)createForPassUniqueIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
