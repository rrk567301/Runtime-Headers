@class OFNormalization, NSString;

@interface SRNet : NSObject

@property (retain, nonatomic) OFNormalization *normalization;
@property (retain, nonatomic) NSString *modelPath;
@property (nonatomic) unsigned long long inputWidth;
@property (nonatomic) unsigned long long inputHeight;
@property (readonly, nonatomic) struct e5rt_program_library { } *library;
@property (readonly, nonatomic) struct e5rt_program_function { } *function;
@property (readonly, nonatomic) struct e5rt_execution_stream_operation { } *operation;
@property (readonly, nonatomic) struct e5rt_execution_stream { } *stream;
@property (nonatomic) struct __IOSurface { } *outputSurface;
@property (readonly, nonatomic) struct e5rt_io_port { } *output_port;
@property (readonly, nonatomic) struct e5rt_buffer_object { } *outputBufferObject;
@property (retain, nonatomic) NSString *outputPortName;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)initializeModel;
- (void)allocateOutputBufferObjects;
- (BOOL)compileModelOnDevice;
- (BOOL)createFunction;
- (BOOL)executeSynchronouslyOperation:(struct e5rt_execution_stream_operation { } *)a0 onStream:(struct e5rt_execution_stream { } *)a1;
- (BOOL)getOutputPortNames;
- (id)initWithModelPath:(id)a0 inputWidth:(unsigned long long)a1 inputHeight:(unsigned long long)a2;
- (void)resetStream:(struct e5rt_execution_stream { } *)a0;

@end
