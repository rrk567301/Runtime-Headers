@class NSString;
@protocol MTL4PipelineDataSetSerializer;

@interface MTL4CompilerDescriptor : NSObject <NSCopying>

@property (nonatomic) BOOL shouldMaximizeConcurrentCompilation;
@property (copy, nonatomic) NSString *label;
@property (retain) id<MTL4PipelineDataSetSerializer> pipelineDataSetSerializer;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
