@class SiriUISymbolButton, SiriUIContentLabel, SiriUIButton, NSTrackingArea;

@interface SiriUINavigationBarView : NSView

@property (retain, nonatomic) SiriUIContentLabel *titleView;
@property (retain, nonatomic) SiriUIButton *backButton;
@property (retain, nonatomic) SiriUISymbolButton *squareBackDrop;
@property (retain, nonatomic) NSTrackingArea *trackingArea;
@property (nonatomic) BOOL isHovered;

- (void)mouseExited:(id)a0;
- (void)setTitle:(id)a0;
- (void)updateTrackingAreas;
- (void)mouseEntered:(id)a0;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (id)init;
- (id)declaredLayoutConstraints;
- (void)mouseMoved:(id)a0;
- (void)setupTrackingArea;
- (void)setHideSquareBackDrop:(BOOL)a0 animated:(BOOL)a1;
- (void)setBackButtonTarget:(id)a0 action:(SEL)a1;
- (void)setHideBackButton:(BOOL)a0 animated:(BOOL)a1;

@end
