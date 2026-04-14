@interface WKDOMDocumentParserYieldToken : NSObject {
    struct unique_ptr<WebCore::DocumentParserYieldToken, std::default_delete<WebCore::DocumentParserYieldToken>> { struct { struct DocumentParserYieldToken *__ptr_; } ; } _token;
}

- (id)initWithDocument:(struct reference_wrapper<WebCore::Document> { struct Document *x0; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
