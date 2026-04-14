@class NSURL, NSString, NSMutableArray;

@interface VINE5RTNetwork : NSObject {
    struct e5rt_execution_stream { } *_stream;
    struct e5rt_execution_stream_operation { } *_operation;
    long long _assetType;
    NSURL *_assetURL;
    NSString *_e5FunctionName;
    NSString *_mutableWeightName;
    NSURL *_mutableWeightPath;
    NSMutableArray *_stateTensorTuples;
}

@property (class, readonly, nonatomic, getter=isMutableWeightSupported) BOOL mutableWeightSupported;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_bindBufferPort:(struct e5rt_io_port { } *)a0 toTensor:(id)a1 error:(id *)a2;
- (struct __CVBuffer { } *)_pixelBufferForPort:(struct e5rt_io_port { } *)a0 name:(id)a1 error:(id *)a2;
- (BOOL)_allocateAndBindBufferPort:(struct e5rt_io_port { } *)a0 error:(id *)a1;
- (BOOL)_allocateAndBindNetworkInputsExcept:(id)a0 error:(id *)a1;
- (BOOL)_allocateAndBindNetworkOutputsExcept:(id)a0 error:(id *)a1;
- (BOOL)_allocateAndBindPort:(struct e5rt_io_port { } *)a0 portName:(const char *)a1 error:(id *)a2;
- (BOOL)_allocateAndBindSurfacePort:(struct e5rt_io_port { } *)a0 error:(id *)a1;
- (BOOL)_bindNetworkInputsToExistingNetwork:(id)a0 error:(id *)a1;
- (BOOL)_bindNetworkOutputsToExistingNetwork:(id)a0 error:(id *)a1;
- (BOOL)_bindSurfacePort:(struct e5rt_io_port { } *)a0 toPixelBuffer:(struct __CVBuffer { } *)a1 error:(id *)a2;
- (BOOL)_loadExecutionStreamOperationWithError:(id *)a0;
- (BOOL)allocateAndBindNetworkIOExceptInputsNamed:(id)a0 outputsNamed:(id)a1 error:(id *)a2;
- (BOOL)bindNetworkIOToExistingNetwork:(id)a0 error:(id *)a1;
- (BOOL)bindNetworkInputNamed:(id)a0 toPixelBuffer:(struct __CVBuffer { } *)a1 error:(id *)a2;
- (BOOL)bindNetworkInputNamed:(id)a0 toTensor:(id)a1 error:(id *)a2;
- (BOOL)bindNetworkOutputNamed:(id)a0 toPixelBuffer:(struct __CVBuffer { } *)a1 error:(id *)a2;
- (BOOL)bindNetworkOutputNamed:(id)a0 toTensor:(id)a1 error:(id *)a2;
- (BOOL)commitNetworkIOBindingsWithError:(id *)a0;
- (BOOL)executeInferenceWithError:(id *)a0;
- (BOOL)loadNetworkWithError:(id *)a0;
- (BOOL)registerNetworkOutputNamed:(id)a0 asDataSourceForNetworkInputNamed:(id)a1 error:(id *)a2;
- (id)tensorSurfaceForNetworkInputNamed:(id)a0 error:(id *)a1;
- (id)tensorSurfaceForNetworkOutputNamed:(id)a0 error:(id *)a1;
- (id)_tensorDescriptorForPort:(struct e5rt_io_port { } *)a0 error:(id *)a1;
- (BOOL)_addMutableWeightIfApplicableToESOPCreateOptions:(struct e5rt_precompiled_compute_op_create_options { } *)a0 error:(id *)a1;
- (id)_pixelBufferDescriptorForPort:(struct e5rt_io_port { } *)a0 error:(id *)a1;
- (id)_tensorSurfaceForPort:(struct e5rt_io_port { } *)a0 error:(id *)a1;
- (id)initWithE5BundlePath:(id)a0 e5FunctionName:(id)a1 mutableWeightName:(id)a2 mutableWeightPath:(id)a3;
- (id)initWithMILPath:(id)a0 e5FunctionName:(id)a1 mutableWeightName:(id)a2 mutableWeightPath:(id)a3;
- (id)pixelBufferDescriptorForNetworkInputNamed:(id)a0 error:(id *)a1;
- (id)pixelBufferDescriptorForNetworkOutputNamed:(id)a0 error:(id *)a1;
- (struct __CVBuffer { } *)retainPixelBufferForNetworkInputNamed:(id)a0 error:(id *)a1;
- (struct __CVBuffer { } *)retainPixelBufferForNetworkOutputNamed:(id)a0 error:(id *)a1;
- (id)tensorDescriptorForNetworkInputNamed:(id)a0 error:(id *)a1;
- (id)tensorDescriptorForNetworkOutputNamed:(id)a0 error:(id *)a1;
- (BOOL)uncommitNetworkIOBindingsWithError:(id *)a0;

@end
