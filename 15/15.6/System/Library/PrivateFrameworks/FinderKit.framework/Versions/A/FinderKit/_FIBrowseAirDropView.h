@class FIBrowseAirDropGutsController;
@protocol _FIBrowseAirDropViewDelegate;

@interface _FIBrowseAirDropView : NSView

@property (retain, nonatomic) FIBrowseAirDropGutsController *controller;
@property id<_FIBrowseAirDropViewDelegate> delegate;

+ (BOOL)automaticallyRemoveOldTrashItems;
+ (void)setAutomaticallyRemoveOldTrashItems:(char)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (char)acceptsPreviewPanelControl:(id)a0;
- (void)beginPreviewPanelControl:(id)a0;
- (void)endPreviewPanelControl:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)selectedURLs;
- (void)viewDidMoveToWindow;
- (void)initCommon;
- (id)activeContainer;

@end
