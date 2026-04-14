@class NSTextView, NSScrollView;

@interface CSKTextViewController : NSViewController

@property (nonatomic) NSTextView *textView;
@property (weak, nonatomic) NSScrollView *scrollView;

- (id)init;
- (void)setText:(id)a0;
- (void).cxx_destruct;

@end
