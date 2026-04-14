@protocol NSLayoutRule, _NSLayoutRuleNodeParent;

@interface _NSLayoutRuleNode : NSObject

@property (copy) id<NSLayoutRule> representedRule;
@property id<_NSLayoutRuleNodeParent> parentNode;

- (id)initWithRule:(id)a0;
- (id)description;
- (void)dealloc;

@end
