@class NSString, MTL4PipelineOptions, MTL4FunctionDescriptor;

@interface MTL4BinaryFunctionDescriptor : NSObject <NSCopying>

@property (copy, nonatomic) MTL4PipelineOptions *pipelineOptions;
@property (copy) NSString *name;
@property (copy, nonatomic) MTL4FunctionDescriptor *functionDescriptor;
@property (nonatomic) unsigned long long options;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)dealloc;

@end
