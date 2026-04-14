@class NSString, FI_TPopover, NSAppearance, NSArray, FI_TPopoverContentViewController;

@interface FI_TPopoverController : NSObject <NSPopoverDelegate, TMarkTornDown> {
    FI_TPopoverContentViewController *_contentViewController;
    struct TNSRef<NSArray, void> { NSArray *fRef; } _topLevelNibObjects;
    struct TNSRef<FI_TPopoverController, void> { FI_TPopoverController *fRef; } _selfReference;
}

@property (readonly, retain, nonatomic) FI_TPopover *popover;
@property (readonly, nonatomic) BOOL isShown;
@property (nonatomic) long long behavior;
@property (retain, nonatomic) NSAppearance *appearance;
@property (nonatomic) BOOL releasedWhenClosed;
@property (nonatomic) double width;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isTornDown) BOOL tornDown;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setWidth:(double)a0;
- (double)width;
- (void)addSubview:(id)a0;
- (void)setReleasedWhenClosed:(BOOL)a0;
- (BOOL)isShown;
- (long long)behavior;
- (void)setBehavior:(long long)a0;
- (void)popoverWillClose:(id)a0;
- (BOOL)releasedWhenClosed;
- (void)aboutToTearDown;
- (id)initWithWidth:(double)a0;
- (void)closePopover;
- (void)showPopoverRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 relativeView:(id)a1 preferredEdge:(unsigned long long)a2;
- (void)removeSubview:(id)a0;

@end
