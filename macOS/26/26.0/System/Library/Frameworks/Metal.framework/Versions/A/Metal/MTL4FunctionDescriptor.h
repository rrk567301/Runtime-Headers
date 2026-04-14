@class MTL4PipelineOptions;

@interface MTL4FunctionDescriptor : NSObject <NSCopying>

@property (retain, nonatomic) MTL4PipelineOptions *pipelineOptions;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
