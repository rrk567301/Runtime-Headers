@class NSString, SCNAction;

@interface SCNActionRunAction : SCNAction {
    SCNAction *_action;
    NSString *_subSpriteKey;
    NSString *_actionKey;
    char _waitForKeyedAction;
    char _runOnSubSprite;
    char _fired;
}

+ (id)runAction:(id)a0 onFirstChildWithName:(id)a1;
+ (id)runAction:(id)a0 afterActionWithKey:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isCustom;
- (id)reversedAction;
- (void)updateWithTarget:(id)a0 forTime:(double)a1;
- (void)willStartWithTarget:(id)a0 atTime:(double)a1;

@end
