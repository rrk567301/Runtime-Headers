@class NSArray;

@interface RSNode : NSObject

@property (readonly, nonatomic, getter=isSourceNode) BOOL sourceNode;
@property (readonly, nonatomic, getter=isSinkNode) BOOL sinkNode;
@property (readonly, copy, nonatomic) NSArray *inputs;
@property (readonly, copy, nonatomic) NSArray *outputs;

- (void)addOutput:(id)a0;
- (void)addInput:(id)a0;
- (void)removeOutput:(id)a0;
- (id)init;
- (void)_handleMessage:(id)a0 fromInput:(id)a1;
- (void)removeInput:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 fromInput:(id)a1;

@end
