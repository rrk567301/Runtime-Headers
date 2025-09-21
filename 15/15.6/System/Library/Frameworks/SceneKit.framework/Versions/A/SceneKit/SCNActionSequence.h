@class NSArray;

@interface SCNActionSequence : SCNAction {
    void *_mycaction;
    NSArray *_actions;
}

+ (char)supportsSecureCoding;
+ (id)sequenceWithActions:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isCustom;
- (id)reversedAction;

@end
