@interface PXAssistantTraitCollection : NSObject <NSCopying>

@property (readonly, nonatomic) double displayScale;
@property (readonly, nonatomic) char isRTL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithDisplayScale:(double)a0 isRTL:(char)a1;

@end
