@class NSArray, NSTextRange, NSTextContentManager;

@interface NSTextElement : NSObject {
    NSTextContentManager *_textContentManager;
}

@property unsigned char coalescingType;
@property (readonly) char isBeginningOfDocument;
@property (readonly) char isEndOfDocument;
@property (weak) NSTextContentManager *textContentManager;
@property (retain) NSTextRange *elementRange;
@property (readonly, copy) NSArray *childElements;
@property (readonly, weak) NSTextElement *parentElement;
@property (readonly) char isRepresentedElement;

+ (long long)_searchElements:(id)a0 forLocation:(id)a1;

- (void)dealloc;
- (id)init;
- (id)textContentManager;
- (id)_firstRepresentableChildElement;
- (char)isEndOfDocument;
- (id)childTextElementForLocation:(id)a0 elementIndex:(out long long *)a1;
- (struct CGSize { double x0; double x1; })estimatedIntrinsicContentSizeForTextLayoutManager:(id)a0;
- (id)initWithTextContentManager:(id)a0;
- (char)isBeginningOfDocument;
- (void)setTextContentManager:(id)a0;

@end
