@class NSString, NSNumber;

@interface SGMailIntelligenceUnsubscriptionRule : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long unsubscriptionRuleField;
@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) NSNumber *mailCount;
@property (readonly, nonatomic) NSNumber *score;

+ (id)prettyNameForUnsubscriptionRuleField:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUnsubscriptionRuleField:(long long)a0 tokenCounts:(id)a1;
- (id)initWithUnsubscriptionRuleField:(long long)a0 value:(id)a1 mailCount:(id)a2 score:(id)a3;

@end
