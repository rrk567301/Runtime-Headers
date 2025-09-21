@class NSArray;

@interface SCNActionGroup : SCNAction {
    void *_mycaction;
    NSArray *_actions;
}

+ (char)supportsSecureCoding;
+ (id)groupWithActions:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)finished;
- (char)isCustom;
- (id)reversedAction;
- (void)setupWithActions:(id)a0;

@end
