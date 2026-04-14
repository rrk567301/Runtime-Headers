@class NSGridView;

@interface NSDebugTouchBarItemInspectorViewController : NSViewController {
    NSGridView *_gridView;
}

- (void)dealloc;
- (void)loadView;
- (void)setRepresentedObject:(id)a0;

@end
