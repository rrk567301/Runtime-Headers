@class MLCDevice, MLCTensor;

@interface MLCTensorParameter : NSObject

@property (retain, nonatomic) MLCDevice *device;
@property (readonly, retain, nonatomic) MLCTensor *tensor;
@property (nonatomic) char isUpdatable;

+ (id)parameterWithTensor:(id)a0 optimizerData:(id)a1;
+ (id)parameterWithTensor:(id)a0;

- (void).cxx_destruct;
- (char)allocateDataForOptimizer:(id)a0 device:(id)a1 isVector:(char)a2;
- (id)initWithTensor:(id)a0 optimizerData:(id)a1;

@end
