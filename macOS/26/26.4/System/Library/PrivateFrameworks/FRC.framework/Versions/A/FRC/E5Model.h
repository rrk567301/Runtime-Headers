@class NSString, IOSurfaceSharedEvent, NSObject, NSMutableArray;
@protocol OS_os_log;

@interface E5Model : NSObject {
    NSObject<OS_os_log> *_logger;
    unsigned long long _signPostId;
    struct e5rt_program_library { } *_library;
    struct e5rt_execution_stream_operation { } *_operation;
    struct e5rt_program_function { } *_function;
    unsigned long long _num_input_ports;
    unsigned long long _num_output_ports;
    struct e5rt_io_port *_input_ports[6];
    struct e5rt_io_port *_output_ports[6];
    NSMutableArray *_functionNames;
    struct { unsigned long long width; unsigned long long height; unsigned long long channels; } _networkInputSize[6];
    struct { unsigned long long width; unsigned long long height; unsigned long long channels; } _networkOutputSize[6];
    struct e5rt_async_event *_dependentEvent[1];
    struct e5rt_async_event { } *_completionEvent;
    NSMutableArray *_inputPortNames;
    NSMutableArray *_outputPortNames;
    struct __IOSurface *_inputSurfaces[6];
    struct __IOSurface *_outputSurfaces[6];
    struct e5rt_execution_stream { } *_stream;
    struct e5rt_buffer_object *_inputBufferObject[6];
    struct e5rt_buffer_object *_outputBufferObject[6];
}

@property (readonly, nonatomic) NSString *modelName;
@property (nonatomic) int deviceType;
@property (retain, nonatomic) IOSurfaceSharedEvent *IOSurfaceSharedEvent;
@property (nonatomic) struct __IOSurface { } *firstInputSurface;
@property (nonatomic) struct __IOSurface { } *secondInputSurface;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)executeAsync:(unsigned long long)a0;
- (void)dealloc;
- (void)resetStream:(struct e5rt_execution_stream { } *)a0;
- (struct __IOSurface { } *)inputIOSurface:(long long)a0;
- (void)allocateBufferObjects;
- (void)bindPorts;
- (BOOL)buildLibraryForModel:(id)a0;
- (BOOL)buildLibraryFromE5BundleForModel:(id)a0;
- (void)createFunctionListFromLibrary;
- (BOOL)encodeStream;
- (BOOL)executeSync;
- (id)functionName:(long long)a0;
- (BOOL)getPortNames;
- (BOOL)getPortShape:(struct e5rt_io_port { } *)a0 width:(unsigned long long *)a1 height:(unsigned long long *)a2 channels:(unsigned long long *)a3 bytesPerComponent:(unsigned long long *)a4;
- (BOOL)initializeFunction:(id)a0;
- (BOOL)initializeFunctionForUsage:(long long)a0;
- (BOOL)initializeLibrary:(id)a0;
- (struct __IOSurface { } *)inputIOSurfaceByName:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })inputSize:(long long)a0;
- (struct __IOSurface { } *)outputIOSurface:(long long)a0;
- (struct __IOSurface { } *)outputIOSurfaceByName:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })outputSize:(long long)a0;
- (void)releaseBufferObjects;
- (void)releaseE5Resoruces;
- (void)setFirstInputSurfac:(struct __IOSurface { } *)a0;
- (void)setInputIOSurface:(struct __IOSurface { } *)a0 index:(long long)a1;
- (void)setOutputIOSurface:(struct __IOSurface { } *)a0 index:(long long)a1;
- (void)setSecondInputSurfac:(struct __IOSurface { } *)a0;

@end
