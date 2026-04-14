@class NSString;

@interface VSSubscriptionSource : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long kind;
@property (copy, nonatomic) NSString *identifier;

+ (id)subscriptionSourceForWebsiteWithDomainName:(id)a0;
+ (id)currentSource;
+ (id)subscriptionSourceForWebsiteWithURL:(id)a0;
+ (id)subscriptionSourceForAppWithBundleID:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
