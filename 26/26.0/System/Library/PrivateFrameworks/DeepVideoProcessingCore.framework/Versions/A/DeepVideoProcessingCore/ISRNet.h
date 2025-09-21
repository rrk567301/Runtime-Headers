@class NSString;

@interface ISRNet : SRNet {
    struct e5rt_io_port { } *_input_port;
    struct e5rt_buffer_object { } *_inputBufferObject;
    NSString *_inputPortName;
}

@property (nonatomic) struct __IOSurface { } *inputSurface;

- (void)dealloc;
- (void).cxx_destruct;
- (void)allocateInputBufferObjects;
- (BOOL)getInputPortNames;
- (id)initWithModelPath:(id)a0 inputWidth:(unsigned long long)a1 inputHeight:(unsigned long long)a2;
- (BOOL)initializeInputPorts;
- (BOOL)processSuperResolutionInputBuffer:(struct __CVBuffer { } *)a0 outputBuffer:(struct __CVBuffer { } *)a1;

@end
