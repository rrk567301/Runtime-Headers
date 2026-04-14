@class NSString;

@interface PKBannerModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *passUniqueIdentifier;
@property (readonly, nonatomic) long long transactionType;
@property (readonly, copy, nonatomic) NSString *bannerModelUniqueID;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPassUniqueIdenitifer:(id)a0 transactionType:(long long)a1;

@end
