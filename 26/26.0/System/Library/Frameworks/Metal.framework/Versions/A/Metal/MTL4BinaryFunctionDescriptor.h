@class NSString, MTL4PipelineOptions, MTL4FunctionDescriptor;

@interface MTL4BinaryFunctionDescriptor : NSObject <NSCopying>

@property (copy, nonatomic) MTL4PipelineOptions *pipelineOptions;
@property (copy) NSString *name;
@property (copy, nonatomic) MTL4FunctionDescriptor *functionDescriptor;
@property (nonatomic) unsigned long long options;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
