@class NSString, NSArray;

@interface NSFilePromiseDragSource : NSObject <NSDraggingSource> {
    id _dragSource;
    NSArray *_filenames;
    struct __CFURL { } *_dropDestination;
    BOOL _dragEnded;
    int _typeCount;
    id _retainedSelf;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithSource:(id)a0;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)a0;
- (void)draggedImage:(id)a0 beganAt:(struct CGPoint { double x0; double x1; })a1;
- (void)draggedImage:(id)a0 endedAt:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (BOOL)ignoreModifierKeysWhileDragging;
- (void)draggingSession:(id)a0 willBeginAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (void)draggingSession:(id)a0 endedAtPoint:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (void)draggingSession:(id)a0 movedToPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)draggedImage:(id)a0 movedTo:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)ignoreModifierKeysForDraggingSession:(id)a0;
- (void)pasteboard:(id)a0 provideDataForType:(id)a1;
- (void)prepareForDrag;
- (void)didEndDrag;
- (struct __CFURL { } *)copyDropDirectory;
- (void)getFilenamesAndDropLocation;
- (void)pasteboard:(id)a0 provideDataForType:(id)a1 itemIdentifier:(long long)a2;
- (void)setTypes:(id)a0 onPasteboard:(id)a1;

@end
