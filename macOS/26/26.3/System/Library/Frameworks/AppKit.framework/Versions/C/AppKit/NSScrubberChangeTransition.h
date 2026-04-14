@class NSScrubberLayoutAttributes;

@interface NSScrubberChangeTransition : NSObject

@property (retain) id view;
@property (retain) NSScrubberLayoutAttributes *fromAttr;
@property (retain) NSScrubberLayoutAttributes *toAttr;
@property (getter=isExiting) BOOL exiting;

- (id)initWithView:(id)a0;
- (id)description;
- (void)dealloc;

@end
