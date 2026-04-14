@class NSString;

@interface MPActionTrigger : MPAction

@property (copy, nonatomic) NSString *actionKey;

+ (BOOL)supportsSecureCoding;
+ (id)actionTrigger;

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setAction:(id)a0;

@end
