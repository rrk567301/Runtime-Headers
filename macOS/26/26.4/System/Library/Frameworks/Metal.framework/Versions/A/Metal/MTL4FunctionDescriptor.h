@class MTL4PipelineOptions;

@interface MTL4FunctionDescriptor : NSObject <NSCopying>

@property (retain, nonatomic) MTL4PipelineOptions *pipelineOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)dealloc;

@end
