@class NSString, CALayer, NSImage;

@interface ICMovieAttachmentView : ICImageAttachmentView <NSAccessibilityGroup>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CALayer *playButtonLayer;
@property (retain, nonatomic) NSImage *playButtonImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playButtonFrame;
@property (nonatomic) char playerWasVisibleDuringMouseDown;
@property (nonatomic) char icaxIsShowingPlayer;

- (void).cxx_destruct;
- (id)accessibilityChildren;
- (id)accessibilityHelp;
- (char)accessibilityPerformPress;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)removeFromSuperview;
- (id)placeholderImageSystemName;
- (void)didChangeAttachment;
- (void)didChangeMedia;
- (void)willDeleteAttachment;
- (void)updateImageSize;
- (void)didTapAttachment:(id)a0;
- (id)icaxTypeDescription;
- (void)makePlayerViewFirstResponderIfNecessary;
- (char)mouseEventIsOverPlayButtonForEvent:(id)a0;
- (void)selectAttachmentView:(id)a0;
- (void)setShowLoadingImage:(char)a0;
- (void)sharedInit:(char)a0;
- (char)shouldIncludeAttachmentTitleInAXLabel;

@end
