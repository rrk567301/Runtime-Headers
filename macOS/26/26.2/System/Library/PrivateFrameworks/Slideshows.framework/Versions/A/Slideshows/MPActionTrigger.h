@class NSString;

@interface MPActionTrigger : MPAction

@property (copy, nonatomic) NSString *actionKey;

+ (BOOL)supportsSecureCoding;
+ (id)actionTrigger;

- (void)setAction:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)dealloc;

@end
