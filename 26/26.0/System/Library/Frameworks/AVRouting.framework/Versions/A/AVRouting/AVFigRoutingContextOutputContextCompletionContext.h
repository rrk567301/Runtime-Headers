@class NSArray;

@interface AVFigRoutingContextOutputContextCompletionContext : NSObject {
    struct OpaqueFigRoutingContext { } *mFigRoutingContext;
}

@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly, retain, nonatomic) NSArray *devicesType;

- (void)dealloc;
- (id)_getFigEndpointTypeFromAVOutputDeviceType:(id)a0;
- (id)initWithCompletionHandler:(id /* block */)a0 outputDevices:(id)a1 figRoutingContext:(struct OpaqueFigRoutingContext { } *)a2;
- (void)reportModificationMetrics:(id)a0;

@end
