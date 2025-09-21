@class FIBrowseAirDropGutsController;
@protocol _FIBrowseAirDropViewDelegate;

@interface _FIBrowseAirDropView : NSView

@property (retain, nonatomic) FIBrowseAirDropGutsController *controller;
@property id<_FIBrowseAirDropViewDelegate> delegate;

+ (BOOL)automaticallyRemoveOldTrashItems;
+ (void)setAutomaticallyRemoveOldTrashItems:(BOOL)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)endPreviewPanelControl:(id)a0;
- (void)beginPreviewPanelControl:(id)a0;
- (void)viewDidMoveToWindow;
- (void)initCommon;
- (BOOL)acceptsPreviewPanelControl:(id)a0;
- (void).cxx_destruct;
- (id)selectedURLs;
- (id)activeContainer;

@end
