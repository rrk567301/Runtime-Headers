@class NSTextView, NSScrollView;

@interface CSKTextViewController : NSViewController

@property (nonatomic) NSTextView *textView;
@property (weak, nonatomic) NSScrollView *scrollView;

- (void).cxx_destruct;
- (id)init;
- (void)setText:(id)a0;

@end
