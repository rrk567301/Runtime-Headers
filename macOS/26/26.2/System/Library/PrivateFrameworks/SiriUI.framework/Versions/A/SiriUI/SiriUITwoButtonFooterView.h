@class SiriUIContentButton, SiriUIKeyline;

@interface SiriUITwoButtonFooterView : SiriUIReusableFooterView {
    SiriUIKeyline *_verticalKeyline;
    SiriUIKeyline *_horizontalKeyline;
}

@property (readonly, nonatomic) SiriUIContentButton *leftButton;
@property (readonly, nonatomic) SiriUIContentButton *rightButton;

+ (double)defaultHeight;

- (void)layout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;

@end
