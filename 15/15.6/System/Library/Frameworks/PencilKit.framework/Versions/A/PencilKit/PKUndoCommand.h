@class NSString;
@protocol PKDrawingUUID;

@interface PKUndoCommand : NSObject

@property (readonly, nonatomic) id<PKDrawingUUID> drawingUUID;
@property (copy, nonatomic) NSString *actionName;
@property (readonly, nonatomic) char changesVisibleStrokes;

- (void).cxx_destruct;
- (id)inverted;
- (id)strokes;
- (void)applyToDrawing:(id)a0;
- (id)initWithDrawingUUID:(id)a0 actionName:(id)a1;
- (id)applyToDrawingReturnInverted:(id)a0;
- (id)initWithDrawingUUID:(id)a0 actionName:(id)a1 changesVisibleStrokes:(char)a2;
- (id)invertedInDrawing:(id)a0;
- (void)registerWithUndoManager:(id)a0 target:(id)a1 selector:(SEL)a2;

@end
