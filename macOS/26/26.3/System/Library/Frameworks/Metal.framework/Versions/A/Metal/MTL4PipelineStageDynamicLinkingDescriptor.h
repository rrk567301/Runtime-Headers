@class NSArray;

@interface MTL4PipelineStageDynamicLinkingDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long maxCallStackDepth;
@property (copy, nonatomic) NSArray *binaryLinkedFunctions;
@property (copy, nonatomic) NSArray *preloadedLibraries;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
