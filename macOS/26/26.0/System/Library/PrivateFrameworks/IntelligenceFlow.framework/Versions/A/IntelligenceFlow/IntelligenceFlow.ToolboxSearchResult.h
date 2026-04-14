@interface IntelligenceFlow.ToolboxSearchResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ similarity;
    void /* unknown type, empty encoding */ toolEmbeddingSnippet;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
