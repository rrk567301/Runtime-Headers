@class NSString, NSTextField;

@interface ASCredentialRequestInfoLabelSubPane : ASCredentialRequestSubPane {
    NSTextField *_infoLabel;
}

@property (nonatomic) double marginInset;
@property (retain, nonatomic) NSString *text;

+ (id)_infoLabelWithString:(id)a0 labelStyle:(long long)a1;
+ (id)_fontForLabelStyle:(long long)a0;
+ (id)_textColorForLabelStyle:(long long)a0;
+ (double)_infoLabelMarginInset;
+ (id)_boldTitleFont;
+ (id)_bodyFont;
+ (id)_boldTitleTextColor;
+ (id)_bodyTextColor;

- (void).cxx_destruct;
- (void)addToStackView:(id)a0 withCustomSpacingAfter:(double)a1 context:(id)a2;
- (id)initWithString:(id)a0 labelStyle:(long long)a1;
- (id)initWithString:(id)a0 labelType:(unsigned long long)a1;

@end
