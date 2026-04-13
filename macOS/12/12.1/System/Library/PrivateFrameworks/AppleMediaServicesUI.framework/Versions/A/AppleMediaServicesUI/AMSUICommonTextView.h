@class NSString, NSAttributedString;

@interface AMSUICommonTextView : NSTextView

@property BOOL centerText;
@property (retain) NSAttributedString *attributedText;
@property (readonly) BOOL hasText;
@property (retain) NSString *text;
@property long long textAlignment;

- (void)layout;
- (BOOL)isFlipped;
- (void)_centerTextIfNeeded;
- (double)textHeightForWidth:(double)a0;

@end
