@interface VSTProxyRendererUpdateState : NSObject

@property (nonatomic) const struct ProxyRendererUpdateState { } *updateStateInternal;
@property (nonatomic) BOOL cullDuringDraw;

- (id)initWithInternalUpdateState:(const struct ProxyRendererUpdateState { } *)a0;

@end
