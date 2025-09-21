@class _NUChannelPort, NUChannelMatching, _NUPipeline, NUPipelinePath;

@interface NUChannelPortRef : NSObject

@property (readonly, nonatomic) _NUChannelPort *port;
@property (readonly, nonatomic) NUChannelMatching *matching;
@property (readonly, nonatomic) _NUPipeline *pipeline;
@property (readonly, nonatomic) NUPipelinePath *pipelinePath;
@property (readonly, nonatomic) BOOL isInput;

+ (id)output:(id)a0;
+ (id)pipeline:(id)a0 input:(id)a1;
+ (id)output:(id)a0 subport:(id)a1;
+ (id)input:(id)a0;
+ (id)input:(id)a0 at:(id)a1;
+ (id)input:(id)a0 subport:(id)a1;
+ (id)output:(id)a0 at:(id)a1;
+ (id)pipeline:(id)a0 output:(id)a1;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPipeline:(id)a0 matching:(id)a1 isInput:(BOOL)a2;
- (id)initWithPipelinePath:(id)a0 matching:(id)a1 isInput:(BOOL)a2;
- (id)initWithPort:(id)a0 isInput:(BOOL)a1;
- (id)initWithSubport:(id)a0 matching:(id)a1 isInput:(BOOL)a2;
- (id)resolvePortWithPipeline:(id)a0 error:(out id *)a1;

@end
