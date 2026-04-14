@class NSArray;

@interface AMPDesktopUI.DownloadStateButton : NSButton {
    void /* unknown type, empty encoding */ kProgressInset;
    void /* unknown type, empty encoding */ $__lazy_storage_$_progressView;
}

@property (nonatomic) void /* unknown type, empty encoding */ downloadState;
@property (nonatomic) void /* unknown type, empty encoding */ isEmphasized;
@property (nonatomic) void /* unknown type, empty encoding */ downloadProgress;
@property (nonatomic) void /* unknown type, empty encoding */ showBackdrop;
@property (nonatomic, readonly) NSArray *exposedBindings;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } focusRingMaskBounds;
@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (nonatomic, readonly) BOOL wantsUpdateLayer;

+ (Class)valueClassForBinding:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)drawFocusRingMask;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)prepareForInterfaceBuilder;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateLayer;

@end
