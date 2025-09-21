@class NSString, MLPixelBufferPool, MLFeatureValue, NSObject, MLFeatureDescription;
@protocol OS_dispatch_queue;

@interface MLE5OutputPortBinder : NSObject <MLE5PortBinder> {
    struct __CVBuffer { } *_temporarilyBoundPixelBuffer;
    MLFeatureValue *_featureValue;
}

@property (readonly) struct e5rt_io_port { } *portHandle;
@property (readonly) MLFeatureDescription *featureDescription;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) char outputBackingWasDirectlyBound;
@property (nonatomic) char boundFeatureDirectly;
@property (retain) id outputBacking;
@property (readonly) MLFeatureValue *featureValue;
@property (retain, nonatomic) MLPixelBufferPool *pixelBufferPool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (char)_copyOutputFromPort:(struct e5rt_io_port { } *)a0 toOutputBacking:(id)a1 featureDescription:(id)a2 error:(id *)a3;
- (unsigned char)_directModeForOutputBacking:(id)a0 error:(id *)a1;
- (char)_directlyBindOutputBacking:(id)a0 error:(id *)a1;
- (id)_makeFeatureValueAndReturnError:(id *)a0;
- (id)_makeFeatureValueFromOutputBacking:(id)a0 error:(id *)a1;
- (id)_makeFeatureValueFromPort:(struct e5rt_io_port { } *)a0 featureDescription:(id)a1 error:(id *)a2;
- (long long)_outputModeForOutputBacking:(id)a0 error:(id *)a1;
- (char)_reusableForCopyBoundOutputBacking;
- (char)_reusableForDirectlyBoundOutputBacking:(id)a0;
- (char)bindAndReturnError:(id *)a0;
- (id)initWithPort:(struct e5rt_io_port { } *)a0 featureDescription:(id)a1;
- (char)reusableForOutputBacking:(id)a0 willBindDirectly:(char *)a1;

@end
