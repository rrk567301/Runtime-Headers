@class MLModel, MLModelAsset;

@interface SSCoreMLInterface : NSObject {
    MLModelAsset *asset;
    MLModel *model;
}

- (id)getVersionString;
- (float)predictFromValues:(id)a0 error:(id *)a1;
- (id)getInputDescriptionsByName;
- (id)getDescription;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (float)predict:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initSpecificModel:(id)a0 error:(id *)a1;
- (float)predictFromDictionaryFeatures:(id)a0 error:(id *)a1;

@end
