@class NSUUID, NSString;

@interface CWFActivity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long timeout;

+ (id)activityWithType:(long long)a0 reason:(id)a1;
+ (id)activityWithType:(long long)a0 reason:(id)a1 UUID:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToActivity:(id)a0;

@end
