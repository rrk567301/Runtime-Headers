@protocol AVOutputDeviceConfigurationRetrieval;

@interface AVRoutingContextSendConfigureDeviceCommandOperation : AVRoutingOperation {
    struct OpaqueFigRoutingContext { } *_routingContext;
    id /* block */ _configuratorBlock;
}

@property (retain, nonatomic) id<AVOutputDeviceConfigurationRetrieval> finalConfiguration;

+ (void)initialize;

- (void)start;
- (BOOL)isAsynchronous;
- (id)init;
- (void)dealloc;
- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext { } *)a0 configuratorBlock:(id /* block */)a1;

@end
