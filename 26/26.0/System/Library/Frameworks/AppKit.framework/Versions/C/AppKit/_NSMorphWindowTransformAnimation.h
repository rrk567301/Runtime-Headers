@class NSView;

@interface _NSMorphWindowTransformAnimation : _NSWindowTransformAnimation

@property (readonly) NSView *sourceView;

- (void).cxx_destruct;
- (id)initWithDestinationWindow:(id)a0 sourceView:(id)a1 animationType:(long long)a2 interruptingAnimation:(id)a3;
- (id)initWithWindow:(id)a0 animatingWindow:(id)a1 type:(long long)a2 interruptingAnimation:(id)a3;

@end
