@class NSLock;

@interface IFXDiskSelectView : NSMatrix {
    long long _actualItems;
    id _previousCell;
    int _targetViewAppearance;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastFrame;
    NSLock *_KVODestructionLock;
    SEL _comparisonSelector;
}

@property int targetViewAppearance;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeAllItems;
- (void)viewDidMoveToWindow;
- (void)awakeFromNib;
- (BOOL)sendAction:(SEL)a0 to:(id)a1;
- (BOOL)canBecomeKeyView;
- (void)deselectAllCells;
- (void)viewFrameDidChange:(id)a0;
- (void)_redoLayout;
- (id)_addNewCell;
- (void)_redoLayoutOnMainThread;
- (void)scrollToFirstAvailableTarget;
- (id)cellForTarget:(id)a0;
- (void)addItemWithObject:(id)a0;
- (void)removeItemWithObject:(id)a0;
- (void)setComparisonSelector:(SEL)a0;

@end
