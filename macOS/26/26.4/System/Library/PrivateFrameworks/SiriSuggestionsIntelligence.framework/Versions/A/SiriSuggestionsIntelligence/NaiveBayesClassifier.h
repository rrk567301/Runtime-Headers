@interface NaiveBayesClassifier : NSObject <MLCustomModel> {
    void /* unknown type, empty encoding */ modelDescription;
    void /* unknown type, empty encoding */ parameters;
    void /* unknown type, empty encoding */ numSamples;
}

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;

@end
