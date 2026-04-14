@class ICAttachmentBrickLabelV2, NSString, ICMZoomController, NSLayoutGuide, NSLayoutConstraint;

@interface ICAttachmentBrickTextViewV2 : NSView <ICMZoomableAttachmentView>

@property (retain, nonatomic) ICAttachmentBrickLabelV2 *titleView;
@property (retain, nonatomic) ICAttachmentBrickLabelV2 *detail1View;
@property (retain, nonatomic) ICAttachmentBrickLabelV2 *detail2View;
@property (retain, nonatomic) NSLayoutGuide *textBoxLayoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *textBoxTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textBoxLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textBoxTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textBoxBottomConstraint;
@property (retain, nonatomic) ICMZoomController *zoomController;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *detail1String;
@property (copy, nonatomic) NSString *detail2String;
@property (nonatomic) BOOL titleLight;
@property (nonatomic) BOOL detail1Dark;
@property (nonatomic) BOOL vibrant;
@property (nonatomic) BOOL disableVibrancy;
@property (nonatomic) BOOL selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)updateTextColors;
- (void)updateMargins;
- (void)updateTextFonts;
- (void)hostViewDidZoom:(id)a0;
- (void)updateTextLayout;

@end
