@class NSAttributedString;

@interface NSColorizedTextFieldCell : NSTextFieldCell

@property (retain, nonatomic) NSAttributedString *originalString;

- (void)setAttributedStringValue:(id)a0;
- (void).cxx_destruct;
- (id)attributedStringValue;

@end
