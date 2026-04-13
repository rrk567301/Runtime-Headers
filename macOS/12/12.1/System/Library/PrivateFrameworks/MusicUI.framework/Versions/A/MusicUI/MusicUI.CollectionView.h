@interface MusicUI.CollectionView : NSCollectionView {
    void /* unknown type, empty encoding */ isDragging;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addSubview:(id)a0;
- (void)rightMouseDown:(id)a0;
- (id)beginDraggingSessionWithItems:(id)a0 event:(id)a1 source:(id)a2;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)draggingSession:(id)a0 endedAtPoint:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;

@end
