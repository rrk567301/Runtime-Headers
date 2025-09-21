@class NSString, NSData;

@interface SEMEmbeddingResult : NSObject

@property (readonly, nonatomic) NSString *input;
@property (readonly, nonatomic) NSData *embedding;

- (void).cxx_destruct;
- (id)initWithInput:(id)a0 embedding:(id)a1;

@end
