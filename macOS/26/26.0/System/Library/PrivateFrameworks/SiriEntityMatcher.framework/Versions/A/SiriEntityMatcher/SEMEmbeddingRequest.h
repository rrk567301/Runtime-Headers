@class NSArray;

@interface SEMEmbeddingRequest : NSObject

@property (readonly, nonatomic) char inputType;
@property (readonly, nonatomic) NSArray *inputs;

- (void).cxx_destruct;
- (id)initWithInputs:(id)a0 ofType:(char)a1;

@end
