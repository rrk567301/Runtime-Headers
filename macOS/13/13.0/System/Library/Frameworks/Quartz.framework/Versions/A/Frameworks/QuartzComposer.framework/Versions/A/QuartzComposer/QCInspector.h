@class NSView, QCPatch;

@interface QCInspector : NSObject {
    NSView *view;
    QCPatch *_patch;
    struct CGSize { double width; double height; } _minSize;
    void *_unused2[2];
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)viewNibName;

- (void)dealloc;
- (id)view;
- (id)viewTitle;
- (id)patch;
- (id)initWithBundle:(id)a0 nibName:(id)a1;
- (void)didLoadNib;
- (void)setupViewForPatch:(id)a0;
- (void)resetView;

@end
