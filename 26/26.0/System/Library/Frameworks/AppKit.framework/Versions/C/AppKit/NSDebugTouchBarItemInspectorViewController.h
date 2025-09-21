@class NSGridView;

@interface NSDebugTouchBarItemInspectorViewController : NSViewController {
    NSGridView *_gridView;
}

- (void)loadView;
- (void)dealloc;
- (void)setRepresentedObject:(id)a0;

@end
