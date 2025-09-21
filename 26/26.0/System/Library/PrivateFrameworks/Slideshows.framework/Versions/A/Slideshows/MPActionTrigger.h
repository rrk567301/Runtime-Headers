@class NSString;

@interface MPActionTrigger : MPAction

@property (copy, nonatomic) NSString *actionKey;

+ (BOOL)supportsSecureCoding;
+ (id)actionTrigger;

- (void)setAction:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
