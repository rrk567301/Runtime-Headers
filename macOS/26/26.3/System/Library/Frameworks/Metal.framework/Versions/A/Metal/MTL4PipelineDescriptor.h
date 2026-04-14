@class NSString, MTL4PipelineOptions;

@interface MTL4PipelineDescriptor : NSObject <NSCopying>

@property (nonatomic) BOOL forceResourceIndex;
@property (nonatomic) unsigned long long resourceIndex;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) MTL4PipelineOptions *options;

- (id)init;
- (void)dealloc;
- (void)reset;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
