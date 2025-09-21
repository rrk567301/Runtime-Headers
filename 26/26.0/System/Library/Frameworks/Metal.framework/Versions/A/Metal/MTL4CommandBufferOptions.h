@protocol MTLLogState;

@interface MTL4CommandBufferOptions : NSObject <NSCopying>

@property (retain, nonatomic) id<MTLLogState> logState;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;

@end
