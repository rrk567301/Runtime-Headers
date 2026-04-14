@protocol MTLLogState;

@interface MTL4CommandBufferOptions : NSObject <NSCopying>

@property (retain, nonatomic) id<MTLLogState> logState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (void)dealloc;

@end
