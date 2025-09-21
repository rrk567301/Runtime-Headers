@class NSString, SKAction;

@interface SKRunAction : SKAction {
    SKAction *_action;
    NSString *_subSpriteKey;
    NSString *_actionKey;
    char _waitForKeyedAction;
    char _runOnSubSprite;
    char _fired;
}

+ (char)supportsSecureCoding;
+ (id)runAction:(id)a0 onFirstChildWithName:(id)a1;
+ (id)runAction:(id)a0 afterActionWithKey:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)reversedAction;
- (void)updateWithTarget:(id)a0 forTime:(double)a1;
- (void)willStartWithTarget:(id)a0 atTime:(double)a1;

@end
