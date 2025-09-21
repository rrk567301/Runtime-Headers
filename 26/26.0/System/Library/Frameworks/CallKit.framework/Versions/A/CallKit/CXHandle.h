@class NSString;

@interface CXHandle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *value;
@property (retain, nonatomic) NSString *siriDisplayName;

+ (id)stringForType:(long long)a0;

- (id)initWithType:(long long)a0 value:(id)a1;
- (id)initWithType:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0 value:(id)a1 siriDisplayName:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToHandle:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
