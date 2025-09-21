@class NSString, NSArray;

@interface AMPDesktopUI.DownloadStateButton : NSButton {
    void /* unknown type, empty encoding */ backgroundStyle;
    void /* unknown type, empty encoding */ progressView;
}

@property (class, nonatomic, copy) NSString *downloadStateBindingName;
@property (class, nonatomic, copy) NSString *downloadProgressBindingName;
@property (class, nonatomic, copy) NSString *emphasizedBindingName;

@property (nonatomic) long long downloadState;
@property (nonatomic) BOOL isEmphasized;
@property (nonatomic) double downloadProgress;
@property (nonatomic) BOOL showBackdrop;
@property (nonatomic, readonly) NSArray *exposedBindings;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } focusRingMaskBounds;
@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (nonatomic, readonly) BOOL wantsUpdateLayer;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

+ (Class)valueClassForBinding:(id)a0;

- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)drawFocusRingMask;
- (void)prepareForInterfaceBuilder;
- (id)propertyKeysForViewSpy;
- (id)stringValueForViewSpyPropertyKey:(id)a0;

@end
