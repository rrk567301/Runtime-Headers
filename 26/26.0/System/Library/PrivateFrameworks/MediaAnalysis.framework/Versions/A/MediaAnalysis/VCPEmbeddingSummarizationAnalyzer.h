@class NSArray, NSMutableArray;

@interface VCPEmbeddingSummarizationAnalyzer : NSObject {
    NSArray *_videoEmbeddings;
    NSMutableArray *_summarizedEmbeddingIds;
    NSMutableArray *_representativeMapping;
}

- (void).cxx_destruct;
- (int)findSummarizedEmbeddings:(id)a0 embeddingSize:(unsigned long long)a1 isFP16:(BOOL)a2;
- (id)summarizedEmbeddings;

@end
