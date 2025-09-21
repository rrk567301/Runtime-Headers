@class NSData, NSArray;

@interface SCMLMADEmbeddingResult : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSArray *shape;

- (id)tokenCountWithError:(id *)a0;
- (void).cxx_destruct;
- (id)float16DataWithError:(id *)a0;
- (id)initWithType:(unsigned long long)a0 data:(id)a1 shape:(id)a2;

@end
