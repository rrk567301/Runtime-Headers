@class NSString;

@interface AKPrivateEmail : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *clientAppBundleId;
@property (readonly, copy, nonatomic) NSString *privateEmailAddress;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0 forKey:(id)a1;
- (id)initWithAddress:(id)a0 forKey:(id)a1 withBundleId:(id)a2;

@end
