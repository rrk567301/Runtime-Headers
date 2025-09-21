@class NSString, MLE5InputPortBinder, MLPixelBufferPool;

@interface MLE5InputPort : NSObject <MLE5IOPort>

@property (readonly) struct e5rt_io_port { } *portHandle;
@property (retain) MLE5InputPortBinder *binder;
@property (readonly, nonatomic) char boundFeatureDirectly;
@property (readonly) NSString *name;
@property (retain, nonatomic) MLPixelBufferPool *pixelBufferPool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (char)copyFeatureValue:(id)a0 error:(id *)a1;
- (id)initWithPortHandle:(struct e5rt_io_port { } *)a0 name:(id)a1 featureDescription:(id)a2;
- (char)prepareForFeatureValue:(id)a0 error:(id *)a1;
- (char)reusableForFeatureValue:(id)a0 willBindDirectly:(char *)a1;

@end
