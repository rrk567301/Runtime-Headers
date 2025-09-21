@class NSAttributedString;

@interface ACSHHoverTextModel : NSObject

@property (copy, nonatomic) NSAttributedString *attributedString;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectionRange;

- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;
- (id)attributedStringForFontSize:(double)a0 foregroundColor:(id)a1;

@end
