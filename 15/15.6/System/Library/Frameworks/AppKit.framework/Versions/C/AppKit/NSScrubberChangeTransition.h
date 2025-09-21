@class NSScrubberLayoutAttributes;

@interface NSScrubberChangeTransition : NSObject

@property (retain) id view;
@property (retain) NSScrubberLayoutAttributes *fromAttr;
@property (retain) NSScrubberLayoutAttributes *toAttr;
@property (getter=isExiting) char exiting;

- (void)dealloc;
- (id)description;
- (id)initWithView:(id)a0;

@end
