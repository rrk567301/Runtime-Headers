@class NSString, MTL4PipelineOptions;

@interface MTL4PipelineDescriptor : NSObject <NSCopying>

@property (nonatomic) BOOL forceResourceIndex;
@property (nonatomic) unsigned long long resourceIndex;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) MTL4PipelineOptions *options;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (id)init;
- (void)dealloc;

@end
