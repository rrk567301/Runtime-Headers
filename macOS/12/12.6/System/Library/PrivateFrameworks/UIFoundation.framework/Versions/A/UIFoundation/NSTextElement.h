@class NSTextContentManager, NSTextRange;

@interface NSTextElement : NSObject {
    NSTextContentManager *_textContentManager;
}

@property unsigned char coalescingType;
@property (weak) NSTextContentManager *textContentManager;
@property (retain) NSTextRange *elementRange;

- (void)dealloc;
- (id)init;
- (id)textContentManager;
- (void)setTextContentManager:(id)a0;
- (struct CGSize { double x0; double x1; })estimatedIntrinsicContentSizeForTextLayoutManager:(id)a0;
- (id)initWithTextContentManager:(id)a0;

@end
