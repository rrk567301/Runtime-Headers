@class NSArray;

@interface MTL4PipelineStageDynamicLinkingDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long maxCallStackDepth;
@property (copy, nonatomic) NSArray *binaryLinkedFunctions;
@property (copy, nonatomic) NSArray *preloadedLibraries;

- (unsigned long long)hash;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
