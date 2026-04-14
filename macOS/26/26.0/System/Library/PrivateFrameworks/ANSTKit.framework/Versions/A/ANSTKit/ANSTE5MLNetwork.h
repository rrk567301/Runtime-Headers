@class NSURL, NSString, NSMutableArray;

@interface ANSTE5MLNetwork : NSObject {
    struct e5rt_execution_stream { } *_stream;
    struct e5rt_execution_stream_operation { } *_operation;
    long long _assetType;
    NSURL *_assetURL;
    NSString *_e5FunctionName;
    NSMutableArray *_stateTensorTuples;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_bindBufferPort:(struct e5rt_io_port { } *)a0 toTensor:(id)a1 error:(id *)a2;
- (id)_pixelBufferForPort:(struct e5rt_io_port { } *)a0 name:(id)a1 error:(id *)a2;
- (id)initWithMILPath:(id)a0 e5FunctionName:(id)a1;
- (BOOL)_allocateAndBindBufferPort:(struct e5rt_io_port { } *)a0 error:(id *)a1;
- (BOOL)_allocateAndBindNetworkInputsExcept:(id)a0 error:(id *)a1;
- (BOOL)_allocateAndBindNetworkOutputsExcept:(id)a0 error:(id *)a1;
- (BOOL)_allocateAndBindPort:(struct e5rt_io_port { } *)a0 portName:(const char *)a1 error:(id *)a2;
- (BOOL)_allocateAndBindSurfacePort:(struct e5rt_io_port { } *)a0 error:(id *)a1;
- (BOOL)_bindNetworkInputsToExistingNetwork:(id)a0 error:(id *)a1;
- (BOOL)_bindNetworkOutputsToExistingNetwork:(id)a0 error:(id *)a1;
- (BOOL)_bindSurfacePort:(struct e5rt_io_port { } *)a0 toPixelBuffer:(struct __CVBuffer { } *)a1 error:(id *)a2;
- (BOOL)_loadExecutionStreamOperationWithError:(id *)a0;
- (id)_tensorSurfaceForPort:(struct e5rt_io_port { } *)a0 name:(id)a1 error:(id *)a2;
- (BOOL)allocateAndBindNetworkIOExceptInputsNamed:(id)a0 outputsNamed:(id)a1 error:(id *)a2;
- (BOOL)bindNetworkIOToExistingNetwork:(id)a0 error:(id *)a1;
- (BOOL)bindNetworkInputNamed:(id)a0 toPixelBuffer:(id)a1 error:(id *)a2;
- (BOOL)bindNetworkInputNamed:(id)a0 toTensor:(id)a1 error:(id *)a2;
- (BOOL)bindNetworkOutputNamed:(id)a0 toPixelBuffer:(id)a1 error:(id *)a2;
- (BOOL)bindNetworkOutputNamed:(id)a0 toTensor:(id)a1 error:(id *)a2;
- (BOOL)commitNetworkIOBindingsWithError:(id *)a0;
- (BOOL)executeInferenceWithError:(id *)a0;
- (id)initWithE5BundlePath:(id)a0 e5FunctionName:(id)a1;
- (id)initWithInferenceDescriptor:(id)a0 error:(id *)a1;
- (BOOL)loadNetworkWithError:(id *)a0;
- (id)pixelBufferForNetworkInputNamed:(id)a0 error:(id *)a1;
- (id)pixelBufferForNetworkOutputNamed:(id)a0 error:(id *)a1;
- (BOOL)registerNetworkOutputNamed:(id)a0 asDataSourceForNetworkInputNamed:(id)a1 error:(id *)a2;
- (id)tensorSurfaceForNetworkInputNamed:(id)a0 error:(id *)a1;
- (id)tensorSurfaceForNetworkOutputNamed:(id)a0 error:(id *)a1;

@end
