@class NSString;
@protocol AXVViewMouseEventDelegate;

@interface AXVView : NSView <AXEEventTapListener>

@property (nonatomic) BOOL _isMouseInBounds;
@property (weak, nonatomic) id<AXVViewMouseEventDelegate> mouseEventDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_handleEvent:(id)a0;
- (void).cxx_destruct;
- (id)imageRepresentation;
- (void)viewWillDraw;
- (void)eventTapManager:(id)a0 passivelyTappedEvent:(struct __CGEvent { } *)a1 type:(unsigned int)a2 withProxy:(struct __CGEventTapProxy { } *)a3;

@end
