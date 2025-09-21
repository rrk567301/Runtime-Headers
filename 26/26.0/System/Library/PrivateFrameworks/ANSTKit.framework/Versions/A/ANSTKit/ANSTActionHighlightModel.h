@class ANSTPixelBufferDescriptor, ANSTTensorDescriptor;

@interface ANSTActionHighlightModel : NSObject {
    unsigned long long _version;
    struct e5rt_execution_stream { } *_stream;
    struct e5rt_execution_stream_operation { } *_operation;
    struct e5rt_buffer_object { } *_inputBufferObject_ht;
    struct e5rt_buffer_object { } *_outputBufferObject_ht;
    struct e5rt_buffer_object { } *_outputBufferObject_action;
    BOOL _prepared;
}

@property (readonly, nonatomic) ANSTPixelBufferDescriptor *inputImageDescriptor;
@property (readonly, nonatomic) ANSTTensorDescriptor *stateTensorDescriptor;

+ (id)new;

- (BOOL)prepareWithError:(id *)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initForVersion:(unsigned long long)a0;
- (BOOL)bindInputFrameBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (BOOL)executeAndUpdateStateTensorData:(id)a0 outputDictionary:(id)a1 outError:(id *)a2;

@end
