@class PXGRenderSnapshot;

@interface PXGCaptureSpritePayload : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long behavior;
@property (readonly, nonatomic) PXGRenderSnapshot *renderSnapshot;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBehavior:(unsigned long long)a0 renderSnapshot:(id)a1;

@end
