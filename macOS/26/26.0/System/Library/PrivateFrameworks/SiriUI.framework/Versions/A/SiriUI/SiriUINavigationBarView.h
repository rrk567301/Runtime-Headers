@class SiriUISymbolButton, SiriUIContentLabel, SiriUIButton, NSTrackingArea;

@interface SiriUINavigationBarView : NSView

@property (retain, nonatomic) SiriUIContentLabel *titleView;
@property (retain, nonatomic) SiriUIButton *backButton;
@property (retain, nonatomic) SiriUISymbolButton *squareBackDrop;
@property (retain, nonatomic) NSTrackingArea *trackingArea;
@property (nonatomic) BOOL isHovered;

- (BOOL)isFlipped;
- (id)init;
- (void)updateTrackingAreas;
- (void)setTitle:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (id)declaredLayoutConstraints;
- (void)mouseMoved:(id)a0;
- (void)setupTrackingArea;
- (void)setHideSquareBackDrop:(BOOL)a0 animated:(BOOL)a1;
- (void)setBackButtonTarget:(id)a0 action:(SEL)a1;
- (void)setHideBackButton:(BOOL)a0 animated:(BOOL)a1;

@end
