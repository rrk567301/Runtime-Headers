@class CALayer;

@interface CARemoteLayerClient : NSObject {
    id _impl;
}

@property (readonly) unsigned int clientId;
@property (retain) CALayer *layer;

- (void)invalidate;
- (id)context;
- (void)dealloc;
- (id)initWithServerPort:(unsigned int)a0;

@end
