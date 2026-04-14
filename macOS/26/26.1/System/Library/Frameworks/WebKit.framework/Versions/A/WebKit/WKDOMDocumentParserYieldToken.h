@interface WKDOMDocumentParserYieldToken : NSObject {
    struct unique_ptr<WebCore::DocumentParserYieldToken, std::default_delete<WebCore::DocumentParserYieldToken>> { struct DocumentParserYieldToken *__ptr_; } _token;
}

- (id)initWithDocument:(struct reference_wrapper<WebCore::Document> { struct Document *x0; })a0;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
