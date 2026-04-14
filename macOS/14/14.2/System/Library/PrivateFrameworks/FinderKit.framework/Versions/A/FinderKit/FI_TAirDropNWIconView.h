@class NSString, NSImage, FI_TAirDropProgressView, NSView, FI_TImageView, NSObject;

@interface FI_TAirDropNWIconView : FI_TIconView <TCollectionViewItemViewProtocol, NSDraggingDestination, TMarkTornDown> {
    FI_TAirDropProgressView *_progressView;
    FI_TImageView *_iconImageView;
    NSView *_avatarView;
    NSImage *_iconImage;
    struct TKeyValueBinder { NSObject *fReceiverObj; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fReceiversBinding; } _shouldAppearPressedBinder;
}

@property (readonly, nonatomic) BOOL shouldAppearPressed;
@property (nonatomic) double percentComplete;
@property (nonatomic) BOOL indeterminateProgress;
@property (copy, nonatomic) NSImage *iconImage;
@property (copy, nonatomic) NSString *subtitleStr;
@property (nonatomic, getter=isPressed) BOOL pressed;
@property (nonatomic, getter=isDropTarget) BOOL dropTarget;
@property (getter=isTornDown) BOOL tornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingShouldAppearPressed;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)prepareForReuse;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)a0;
- (void)awakeFromNib;
- (void)updateLayer;
- (void)aboutToTearDown;
- (void)initCommon;
- (void)cancelAllAnimations;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })iconFrame;
- (id)accessibilityChildrenAttributeValue;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameAttributeValue;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })accessibilityTitleAttributeValue;
- (void)cancelEntryAnimation;
- (void)cancelExitAnimation;
- (id)dragFlockingIconImage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (id)dragFlockingTitleImage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (void)performEntryAnimation;
- (void)performExitAnimation;
- (id)popoverAnchorView;
- (void)resetProgress;

@end
