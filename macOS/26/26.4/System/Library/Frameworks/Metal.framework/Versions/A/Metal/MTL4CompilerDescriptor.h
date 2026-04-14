@class NSString;
@protocol MTL4PipelineDataSetSerializer;

@interface MTL4CompilerDescriptor : NSObject <NSCopying>

@property (nonatomic) BOOL shouldMaximizeConcurrentCompilation;
@property (copy, nonatomic) NSString *label;
@property (retain) id<MTL4PipelineDataSetSerializer> pipelineDataSetSerializer;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)dealloc;

@end
