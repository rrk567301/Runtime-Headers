@class NSString, NSAttributedString;
@protocol AMSUICommonTextViewDelegate;

@interface AMSUICommonTextView : NSTextView

@property (weak) id<AMSUICommonTextViewDelegate> ams_delegate;
@property BOOL centerText;
@property (retain) NSAttributedString *attributedText;
@property (readonly) BOOL hasText;
@property (retain) NSString *text;
@property long long textAlignment;

- (void)layout;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)_centerTextIfNeeded;
- (double)textHeightForWidth:(double)a0;

@end
