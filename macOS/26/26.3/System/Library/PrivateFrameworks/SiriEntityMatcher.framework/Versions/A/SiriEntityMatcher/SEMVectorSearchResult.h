@class NSString, NSData;

@interface SEMVectorSearchResult : NSObject

@property (readonly, nonatomic) char embeddingType;
@property (readonly, nonatomic) float score;
@property (readonly, nonatomic) NSString *displayString;
@property (readonly, nonatomic) NSData *payload;

- (void).cxx_destruct;
- (id)initWithEmbeddingType:(char)a0 score:(float)a1 displayString:(id)a2 payload:(id)a3;

@end
