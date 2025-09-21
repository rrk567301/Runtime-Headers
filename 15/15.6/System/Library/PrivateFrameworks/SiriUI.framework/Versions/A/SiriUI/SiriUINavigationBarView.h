@class SiriUISymbolButton, SiriUIContentLabel, SiriUIButton, NSTrackingArea;

@interface SiriUINavigationBarView : NSView

@property (retain, nonatomic) SiriUIContentLabel *titleView;
@property (retain, nonatomic) SiriUIButton *backButton;
@property (retain, nonatomic) SiriUISymbolButton *squareBackDrop;
@property (retain, nonatomic) NSTrackingArea *trackingArea;
@property (nonatomic) char isHovered;

- (id)init;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)declaredLayoutConstraints;
- (char)isFlipped;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)updateTrackingAreas;
- (void)setupTrackingArea;
- (void)setHideSquareBackDrop:(char)a0 animated:(char)a1;
- (void)setBackButtonTarget:(id)a0 action:(SEL)a1;
- (void)setHideBackButton:(char)a0 animated:(char)a1;

@end
