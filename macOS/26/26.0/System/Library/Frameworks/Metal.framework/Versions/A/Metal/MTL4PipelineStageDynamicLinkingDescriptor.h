@class NSArray;

@interface MTL4PipelineStageDynamicLinkingDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long maxCallStackDepth;
@property (copy, nonatomic) NSArray *binaryLinkedFunctions;
@property (copy, nonatomic) NSArray *preloadedLibraries;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
