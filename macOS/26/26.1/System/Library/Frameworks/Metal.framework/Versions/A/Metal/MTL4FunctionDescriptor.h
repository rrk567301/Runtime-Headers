@class MTL4PipelineOptions;

@interface MTL4FunctionDescriptor : NSObject <NSCopying>

@property (retain, nonatomic) MTL4PipelineOptions *pipelineOptions;

- (unsigned long long)hash;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
