@interface MKSearchFoundationRichText : SFRichText

@property (copy, nonatomic) id /* block */ completionHandlers;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)setText:(id)a0;
- (void)setFormattedTextPieces:(id)a0;
- (BOOL)isRichTextResolved;
- (void)_invokeCompletionHandlers;
- (id)initRichTextTitleWithMapItem:(id)a0 resultsType:(unsigned long long)a1;
- (void)loadRichTextWithCompletionHandler:(id /* block */)a0;

@end
