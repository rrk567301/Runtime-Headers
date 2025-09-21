@class NSString, NSAttributedString;

@interface MKAppleLogoLabel : NSView <MKAppleLogoView> {
    NSAttributedString *_strokeText;
    NSAttributedString *_innerText;
}

@property (readonly, nonatomic) double bottomLayoutAdjustment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)sizeToFit;
- (void).cxx_destruct;
- (BOOL)clipsToBounds;
- (id)initForMapType:(unsigned long long)a0 forDarkMode:(BOOL)a1;
- (void)updateForMapType:(unsigned long long)a0 darkMode:(BOOL)a1;

@end
