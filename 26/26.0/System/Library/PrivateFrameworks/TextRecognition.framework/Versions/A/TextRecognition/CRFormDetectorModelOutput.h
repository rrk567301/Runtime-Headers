@class MLMultiArray, NSSet;

@interface CRFormDetectorModelOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *boundingBoxes;
@property (retain, nonatomic) MLMultiArray *classLogits;
@property (retain, nonatomic) MLMultiArray *anchors;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithBoundingBoxes:(id)a0 classLogits:(id)a1 anchors:(id)a2;

@end
