@class NSString;

@interface WBSSavedAccountContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) WBSSavedAccountContext *defaultContext;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *nameForPersistence;

+ (id)_nameForDefaultSafariProfile;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSafariProfileIdentifier:(id)a0;

@end
