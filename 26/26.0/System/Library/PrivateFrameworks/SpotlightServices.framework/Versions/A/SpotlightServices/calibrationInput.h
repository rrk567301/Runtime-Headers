@class MLMultiArray, NSSet;

@interface calibrationInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *query_embedding;
@property (retain, nonatomic) MLMultiArray *document_embedding;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithQuery_embedding:(id)a0 document_embedding:(id)a1;

@end
