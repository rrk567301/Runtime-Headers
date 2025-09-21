@class NSArray;

@interface SKGroup : SKAction {
    void *_mycaction;
    NSArray *_actions;
}

+ (char)supportsSecureCoding;
+ (id)groupWithActions:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)finished;
- (id)subactions;
- (id)reversedAction;

@end
