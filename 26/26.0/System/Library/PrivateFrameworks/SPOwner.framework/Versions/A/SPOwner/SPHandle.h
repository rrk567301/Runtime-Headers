@class NSString;

@interface SPHandle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *destination;
@property (copy, nonatomic) NSString *formattedName;

+ (id)handleWithEmailAddress:(id)a0;
+ (id)handleWithPhoneNumber:(id)a0;
+ (id)handleWithString:(id)a0 formattedName:(id)a1;
+ (id)handleWithRecipient:(id)a0;
+ (id)handleWithString:(id)a0;
+ (id)handleWithWeb:(id)a0;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 destination:(id)a1;
- (id)initWithType:(long long)a0 destination:(id)a1 formattedName:(id)a2;

@end
