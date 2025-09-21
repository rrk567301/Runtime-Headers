@class NSString;

@interface SPHandle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *destination;
@property (copy, nonatomic) NSString *formattedName;

+ (id)handleWithEmailAddress:(id)a0;
+ (id)handleWithPhoneNumber:(id)a0;
+ (id)handleWithString:(id)a0 formattedName:(id)a1;
+ (id)handleWithString:(id)a0;
+ (id)handleWithWeb:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 destination:(id)a1;
- (id)initWithType:(long long)a0 destination:(id)a1 formattedName:(id)a2;

@end
