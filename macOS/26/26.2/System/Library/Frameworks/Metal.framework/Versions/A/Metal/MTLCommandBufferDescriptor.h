@protocol MTLLogState;

@interface MTLCommandBufferDescriptor : NSObject <NSCopying>

@property (nonatomic) BOOL retainedReferences;
@property (nonatomic) unsigned long long errorOptions;
@property (retain, nonatomic) id<MTLLogState> logState;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
