@class NSTextField, NSButton, PRSImageView, NSVisualEffectView, NSLayoutConstraint;

@interface PRSTrailersSliceView : NSView

@property long long hoverTrailerIndex;
@property NSTextField *titleTextField;
@property (readonly) unsigned long long maximumNumberOfTrailers;
@property unsigned long long numberOfTrailers;
@property PRSImageView *trailerImageView1;
@property PRSImageView *trailerImageView2;
@property PRSImageView *trailerImageView3;
@property NSVisualEffectView *trailerOverlayImageView1;
@property NSVisualEffectView *trailerOverlayImageView2;
@property NSVisualEffectView *trailerOverlayImageView3;
@property NSLayoutConstraint *trailerImageViewHeightConstraint;
@property NSTextField *trailerTextField1;
@property NSTextField *trailerTextField2;
@property NSTextField *trailerTextField3;
@property NSButton *playButton;

- (void)dealloc;
- (void)awakeFromNib;
- (void)cursorUpdate:(id)a0;
- (BOOL)isAccessibilityElement;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)updateTrackingAreas;
- (void)_removeTrackingAreas;
- (id)trailerOverlayImageViewAtIndex:(unsigned long long)a0;
- (id)trailerVibrantImageViewAtIndex:(unsigned long long)a0;
- (long long)_indexForTrackingAreaEvent:(id)a0;
- (BOOL)_isValidTrailerIndex:(long long)a0;
- (void)_sendAction:(SEL)a0 to:(id)a1 from:(id)a2;
- (void)setPlayButtonImage:(id)a0 atIndex:(unsigned long long)a1;
- (id)trailerImageViewAtIndex:(unsigned long long)a0;
- (id)trailerTextFieldAtIndex:(unsigned long long)a0;

@end
