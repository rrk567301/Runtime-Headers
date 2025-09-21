@class NSString, NSAttributedString;
@protocol AMSUICommonTextViewDelegate;

@interface AMSUICommonTextView : NSTextView

@property (weak) id<AMSUICommonTextViewDelegate> ams_delegate;
@property char centerText;
@property (retain) NSAttributedString *attributedText;
@property (readonly) char hasText;
@property (retain) NSString *text;
@property long long textAlignment;

- (void).cxx_destruct;
- (void)layout;
- (char)isFlipped;
- (void)_centerTextIfNeeded;
- (double)textHeightForWidth:(double)a0;

@end
