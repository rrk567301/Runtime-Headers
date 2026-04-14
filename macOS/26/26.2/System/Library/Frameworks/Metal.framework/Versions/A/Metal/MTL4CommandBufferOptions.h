@protocol MTLLogState;

@interface MTL4CommandBufferOptions : NSObject <NSCopying>

@property (retain, nonatomic) id<MTLLogState> logState;

- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)dealloc;

@end
