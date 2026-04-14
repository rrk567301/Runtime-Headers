@class ICTTTextStorage;

@interface ICCalculateStringScanner : NSObject

@property (weak, nonatomic) ICTTTextStorage *textStorage;

- (id)initWithTextStorage:(id)a0;
- (void).cxx_destruct;
- (id)offsetsForInlineAttachment:(id)a0;
- (id)replacementForAttachment:(id)a0;
- (id)scanStringforRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 previewedExpressionString:(id)a1;

@end
