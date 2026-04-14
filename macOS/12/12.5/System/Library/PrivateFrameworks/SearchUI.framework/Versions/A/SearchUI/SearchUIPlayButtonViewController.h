@class SFPunchout, NSString, NSArray, SearchUIButton, TLKLabel;

@interface SearchUIPlayButtonViewController : SearchUIAccessoryViewController <NUIContainerViewDelegate>

@property (retain, nonatomic) SFPunchout *punchout;
@property (retain, nonatomic) SearchUIButton *playButton;
@property (retain, nonatomic) TLKLabel *captionLabel;
@property (retain, nonatomic) NSString *spotlightIdentifier;
@property (retain, nonatomic) NSArray *storeIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)font;
+ (BOOL)supportsRowModel:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)type;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerView:(id)a0 layoutFrameForArrangedSubview:(id)a1 withProposedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)setupView;
- (void)buttonPressed;
- (void)updateWithRowModel:(id)a0;
- (BOOL)shouldTopAlignForAccessibilityContentSizes;
- (void)sendEngagementDidPunchout:(BOOL)a0;

@end
