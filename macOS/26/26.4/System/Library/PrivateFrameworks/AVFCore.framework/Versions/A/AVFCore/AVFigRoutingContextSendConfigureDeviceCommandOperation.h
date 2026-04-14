@protocol AVOutputDeviceConfigurationRetrieval;

@interface AVFigRoutingContextSendConfigureDeviceCommandOperation : AVOperation {
    struct OpaqueFigRoutingContext { } *_routingContext;
    id /* block */ _configuratorBlock;
}

@property (retain, nonatomic) id<AVOutputDeviceConfigurationRetrieval> finalConfiguration;

+ (void)initialize;

- (BOOL)isAsynchronous;
- (id)init;
- (void)start;
- (void)dealloc;
- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext { } *)a0 configuratorBlock:(id /* block */)a1;

@end
