@class NSString, NSColor, NSAttributedString;

@interface ICAttachmentBrickLabelV2 : NSTextField

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) double lineHeight;
@property (retain, nonatomic) NSColor *defaultTextColor;
@property (nonatomic) BOOL vibrant;
@property (nonatomic) BOOL disableVibrancy;
@property (copy, nonatomic) NSAttributedString *ic_attributedStringValue;
@property (copy, nonatomic) NSString *ic_stringValue;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTextColor:(id)a0;
- (void)textDidChange:(id)a0;
- (id)text;
- (void)setText:(id)a0;
- (void)setNumberOfLines:(long long)a0;
- (long long)numberOfLines;
- (void)updatePreferredMaxLayoutWidth:(id)a0;

@end
