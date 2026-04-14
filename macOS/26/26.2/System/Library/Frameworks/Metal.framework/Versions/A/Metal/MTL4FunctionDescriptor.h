@class MTL4PipelineOptions;

@interface MTL4FunctionDescriptor : NSObject <NSCopying>

@property (retain, nonatomic) MTL4PipelineOptions *pipelineOptions;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)dealloc;

@end
