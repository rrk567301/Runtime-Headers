@class CALayer;

@interface CARemoteLayerClient : NSObject {
    id _impl;
}

@property (readonly) unsigned int clientId;
@property (retain) CALayer *layer;

- (void)dealloc;
- (void)invalidate;
- (id)context;
- (id)initWithServerPort:(unsigned int)a0;

@end
