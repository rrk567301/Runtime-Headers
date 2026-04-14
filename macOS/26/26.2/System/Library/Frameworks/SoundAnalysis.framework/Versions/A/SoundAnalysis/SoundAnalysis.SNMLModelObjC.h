@class MLModelDescription;

@interface SoundAnalysis.SNMLModelObjC : NSObject <SNMLModelObjCProtocol, SNMLModelObjCProtocol> {
    void /* unknown type, empty encoding */ model;
}

@property (nonatomic, readonly) MLModelDescription *modelDescription;

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;

@end
