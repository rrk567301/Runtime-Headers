@interface _SNEBankCustomModel : NSObject <MLCustomModel> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ coefAllocations;
}

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;

@end
