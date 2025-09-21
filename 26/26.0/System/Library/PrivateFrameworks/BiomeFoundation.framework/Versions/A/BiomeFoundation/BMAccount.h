@class NSString;

@interface BMAccount : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *altDSID;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, copy, nonatomic) NSString *biomeAccountIdentifier;

+ (id)new;
+ (id)_hashOfString:(id)a0;
+ (BOOL)verifyFormattedLikeIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithAccountIdentifier:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithAltDSID:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBiomeAccountIdentifier:(id)a0;

@end
