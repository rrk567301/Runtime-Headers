@class MLModel, MLModelAsset;

@interface SSCoreMLInterface : NSObject {
    MLModelAsset *asset;
    MLModel *model;
}

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)getDescription;
- (float)predict:(id)a0 error:(id *)a1;
- (id)initSpecificModel:(id)a0 error:(id *)a1;
- (float)predictFromValues:(id)a0 error:(id *)a1;
- (id)getVersionString;

@end
