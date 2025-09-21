@class NSArray;

@interface SKSequence : SKAction {
    void *_mycaction;
    NSArray *_actions;
    unsigned long long _animIndex;
}

+ (char)supportsSecureCoding;
+ (id)sequenceWithActions:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)subactions;
- (id)reversedAction;

@end
