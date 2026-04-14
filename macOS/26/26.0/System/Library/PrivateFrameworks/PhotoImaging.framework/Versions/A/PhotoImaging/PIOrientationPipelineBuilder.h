@class NUIdentifier, NUChannelMediaFormat;

@interface PIOrientationPipelineBuilder : NSObject <NUPipelineBuilder>

@property (readonly, nonatomic) NUChannelMediaFormat *format;
@property (readonly, nonatomic) NUIdentifier *identifier;

- (id)init;
- (void).cxx_destruct;
- (BOOL)buildPipeline:(id)a0 error:(out id *)a1;
- (id)initWithChannelFormat:(id)a0;
- (id)_buildOrientationPipeline:(id)a0 input:(id)a1 adjustment:(id)a2 error:(out id *)a3;

@end
