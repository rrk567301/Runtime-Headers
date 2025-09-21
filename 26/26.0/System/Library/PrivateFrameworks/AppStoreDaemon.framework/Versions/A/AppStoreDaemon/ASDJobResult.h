@class NSString, NSError, NSNumber;

@interface ASDJobResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSNumber *persistentID;
@property (readonly, nonatomic) long long status;

+ (id)resultWithRestrictedActivity:(long long)a0 bundleID:(id)a1;
+ (id)resultWithExistingActivity:(long long)a0 bundleID:(id)a1;
+ (id)resultWithValidActivity:(long long)a0 bundleID:(id)a1;
+ (id)resultWithInvalidActivity:(long long)a0 bundleID:(id)a1;
+ (id)resultWithPersistentID:(id)a0 bundleID:(id)a1 status:(long long)a2 error:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
