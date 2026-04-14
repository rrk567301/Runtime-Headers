@class NSMutableArray;

@interface VSRNet : SRNet {
    struct e5rt_io_port *_input_ports[2];
    struct e5rt_buffer_object *_inputBufferObjects[2];
    NSMutableArray *_inputPortNames;
}

@property (nonatomic) struct __IOSurface { } *inputSurface;
@property (nonatomic) struct __IOSurface { } *prevHRSurface;

- (void)dealloc;
- (void).cxx_destruct;
- (void)allocateInputBufferObjects;
- (BOOL)getInputPortNames;
- (id)initWithModelPath:(id)a0 inputWidth:(unsigned long long)a1 inputHeight:(unsigned long long)a2;
- (BOOL)initializeInputPorts;
- (BOOL)processSuperResolutionInputBuffer:(struct __CVBuffer { } *)a0 withPrevHighResolutionFrame:(struct __CVBuffer { } *)a1 outputBuffer:(struct __CVBuffer { } *)a2;

@end
