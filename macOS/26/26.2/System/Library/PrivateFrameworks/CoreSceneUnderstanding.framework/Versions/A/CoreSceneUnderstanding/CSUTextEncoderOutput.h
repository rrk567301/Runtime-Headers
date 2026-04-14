@class NSArray, MLMultiArray, NSDictionary, NSString;

@interface CSUTextEncoderOutput : NSObject

@property (retain) MLMultiArray *CSUTextEmbedding;
@property (retain) MLMultiArray *CSUTokenEmbedding;
@property (retain, nonatomic) NSDictionary *additionalLayers;
@property (retain) NSArray *tokens;
@property (retain) NSArray *tokenIds;
@property (retain) NSArray *tokenSegments;
@property (nonatomic) BOOL truncatedInput;
@property (retain, nonatomic) NSString *processedInput;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTextEmbedding:(id)a0;

@end
