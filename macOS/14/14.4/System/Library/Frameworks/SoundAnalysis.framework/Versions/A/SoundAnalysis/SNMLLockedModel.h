@class MLModelDescription;

@interface SNMLLockedModel : NSObject <SNMLModel> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ lock;
}

@property (nonatomic, readonly) MLModelDescription *modelDescription;

- (id)init;
- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithModel:(id)a0;

@end
