@class NSString, NSArray, NSDictionary;

@interface TCGECTaggerModel : NSObject <TCGECModel> {
    NSString *_modelPath;
    void *_embeddings;
    struct MontrealNeuralNetwork { } *_gecClassifier;
    struct MontrealNeuralNetwork { } *_vscClassifier;
    NSArray *_gecClassifierLabels;
    NSDictionary *_labelsToIssueType;
    NSDictionary *_indicationThresholds;
    NSDictionary *_autocorrectionThresholds;
    NSDictionary *_detailedIssueTypes;
    unsigned long long _keepLabelIndex;
}

@property (readonly, nonatomic) unsigned long long numCategories;
@property (readonly, nonatomic) unsigned long long embeddingDimension;

- (void)dealloc;
- (void).cxx_destruct;
- (id)embeddingsForTokenizedSentence:(id)a0;
- (id)classifierPrediction:(struct MontrealNeuralNetwork { } *)a0 labelCount:(unsigned long long)a1 input:(id)a2 tokenCount:(unsigned long long)a3;
- (id)classifierPredictions:(id)a0 tokenCount:(unsigned long long)a1;
- (id)correctionForPredictedClass:(unsigned long long)a0 withProbability:(float)a1;
- (void)enumerateIssuesForSentence:(id)a0 checkTermination:(char)a1 withBlock:(id /* block */)a2;
- (id)initWithModelPath:(id)a0 OTABundlePath:(id)a1 options:(id)a2;
- (char)isTerminatedSentence:(id)a0 embeddings:(id)a1;
- (char)loadAutocorrectionThresholdsFromURL:(id)a0;
- (char)loadDetailedIssueTypesFromURL:(id)a0;
- (char)loadErrorClassesFromURL:(id)a0;
- (char)loadIndicationThresholdsFromURL:(id)a0;
- (char)useANEWithOptions:(id)a0;

@end
