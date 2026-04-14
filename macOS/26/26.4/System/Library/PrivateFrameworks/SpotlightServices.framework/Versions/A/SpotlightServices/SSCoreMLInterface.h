@class MLModel, MLModelAsset;

@interface SSCoreMLInterface : NSObject {
    MLModelAsset *asset;
    MLModel *model;
}

- (id)initSpecificModel:(id)a0 error:(id *)a1;
- (id)getInputDescriptionsByName;
- (float)predictFromValues:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (float)predictFromDictionaryFeatures:(id)a0 error:(id *)a1;
- (id)getVersionString;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (float)predict:(id)a0 error:(id *)a1;
- (id)getDescription;

@end
