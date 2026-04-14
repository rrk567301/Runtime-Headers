@class LNActionConfigurationCondition, LNActionConfiguration;

@interface LNActionConfigurationWhen : LNActionConfiguration <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNActionConfigurationCondition *condition;
@property (readonly, nonatomic) LNActionConfiguration *when;
@property (readonly, nonatomic) LNActionConfiguration *otherwise;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCondition:(id)a0 when:(id)a1 otherwise:(id)a2;

@end
