@protocol MTLLogState;

@interface MTL4CommandBufferOptions : NSObject <NSCopying>

@property (retain, nonatomic) id<MTLLogState> logState;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
