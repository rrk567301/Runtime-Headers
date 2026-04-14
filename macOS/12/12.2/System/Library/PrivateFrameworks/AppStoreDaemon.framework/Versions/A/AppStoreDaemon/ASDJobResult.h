@class NSString, NSError, NSNumber;

@interface ASDJobResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSNumber *persistentID;
@property (nonatomic) long long status;

+ (id)_resultWithPersistentID:(long long)a0 bundleID:(id)a1 status:(long long)a2 error:(id)a3;
+ (id)resultWithExistingActivity:(long long)a0 bundleID:(id)a1;
+ (id)resultWithInvalidActivity:(long long)a0 bundleID:(id)a1;
+ (id)resultWithRestrictedActivity:(long long)a0 bundleID:(id)a1;
+ (id)resultWithValidActivity:(long long)a0 bundleID:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
