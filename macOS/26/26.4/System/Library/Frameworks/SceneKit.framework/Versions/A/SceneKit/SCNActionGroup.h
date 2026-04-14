@class NSArray;

@interface SCNActionGroup : SCNAction {
    void *_mycaction;
    NSArray *_actions;
}

+ (BOOL)supportsSecureCoding;
+ (id)groupWithActions:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)finished;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)isCustom;
- (id)reversedAction;
- (void)setupWithActions:(id)a0;

@end
