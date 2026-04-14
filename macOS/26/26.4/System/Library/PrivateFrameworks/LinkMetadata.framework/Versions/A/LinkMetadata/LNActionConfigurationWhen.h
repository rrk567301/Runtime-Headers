@class LNActionConfigurationCondition, LNActionConfiguration;

@interface LNActionConfigurationWhen : LNActionConfiguration <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNActionConfigurationCondition *condition;
@property (readonly, nonatomic) LNActionConfiguration *when;
@property (readonly, nonatomic) LNActionConfiguration *otherwise;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithCondition:(id)a0 when:(id)a1 otherwise:(id)a2;

@end
