@interface AXFTargetSelector : NSObject

@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;

+ (id)targetSelectorWithTarget:(id)a0 selector:(SEL)a1;

- (id)description;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (void).cxx_destruct;

@end
