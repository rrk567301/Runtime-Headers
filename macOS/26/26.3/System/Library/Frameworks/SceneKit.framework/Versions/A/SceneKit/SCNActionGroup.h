@class NSArray;

@interface SCNActionGroup : SCNAction {
    void *_mycaction;
    NSArray *_actions;
}

+ (BOOL)supportsSecureCoding;
+ (id)groupWithActions:(id)a0;

- (id)init;
- (BOOL)finished;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isCustom;
- (id)reversedAction;
- (void)setupWithActions:(id)a0;

@end
