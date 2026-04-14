@class NSDraggingSession;

@interface NSCoreDragManager : _NSDragManager {
    NSDraggingSession *_dragSession;
    struct OpaqueCoreDragHandler { } *applicationHandlerRef;
}

+ (void)doCommandBySelector:(SEL)a0;
+ (void)insertText:(id)a0;

- (id)_alternateDragSource;
- (void)_cancelAllFilePromiseDrags;
- (id)_dragLocalSource;
- (void)_dragUntilMouseUp:(id)a0 accepted:(BOOL *)a1;
- (void)_registerFilePromiseDraggingEndedTarget:(id)a0;
- (void)_setAlternateDragSource:(id)a0;
- (id)beginDraggingSessionWithItems:(id)a0 fromWindow:(id)a1 withClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 event:(id)a3 source:(id)a4;
- (void)dragImage:(id)a0 fromWindow:(id)a1 at:(struct CGPoint { double x0; double x1; })a2 offset:(struct CGSize { double x0; double x1; })a3 event:(id)a4 pasteboard:(id)a5 source:(id)a6 slideBack:(BOOL)a7;
- (id)draggingSessionWithSequenceNumber:(long long)a0;
- (int)registerDragTypes:(id)a0 forWindow:(id)a1;
- (void)registerForCompletionOfDrag:(void *)a0;
- (void)registerWindow:(id)a0 foriOSMacContext:(unsigned int)a1;
- (void)slideImage:(id)a0 from:(struct CGPoint { double x0; double x1; })a1 to:(struct CGPoint { double x0; double x1; })a2;
- (BOOL)switchWindow:(id)a0 dragRegistrationToRemoteContext:(unsigned int)a1;
- (BOOL)unregisterDragTypesForWindow:(id)a0;
- (void)unregisterWindow:(id)a0 foriOSMacContext:(unsigned int)a1;

@end
