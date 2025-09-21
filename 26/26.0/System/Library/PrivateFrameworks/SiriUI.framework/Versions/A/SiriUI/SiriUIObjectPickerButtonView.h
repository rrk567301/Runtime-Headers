@class NSButton, SiriUIKeyline;

@interface SiriUIObjectPickerButtonView : NSView {
    SiriUIKeyline *_topKeyline;
    SiriUIKeyline *_bottomKeyline;
}

@property (readonly, nonatomic) NSButton *button;
@property (nonatomic) BOOL showsTopKeyline;

+ (double)defaultHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void).cxx_destruct;

@end
