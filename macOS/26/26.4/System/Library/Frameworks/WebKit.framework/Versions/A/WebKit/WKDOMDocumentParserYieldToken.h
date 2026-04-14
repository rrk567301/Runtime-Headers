@interface WKDOMDocumentParserYieldToken : NSObject {
    struct unique_ptr<WebCore::DocumentParserYieldToken, std::default_delete<WebCore::DocumentParserYieldToken>> { struct { struct DocumentParserYieldToken *__ptr_; } ; } _token;
}

- (void).cxx_destruct;
- (id)initWithDocument:(struct reference_wrapper<WebCore::Document> { struct Document *x0; })a0;
- (id).cxx_construct;

@end
