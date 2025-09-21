@class SCROutputRequest, SCREvent;

@interface SCREventDispatcherHandlerInfo : NSObject

@property (retain, nonatomic) SCREvent *event;
@property (retain, nonatomic) SCROutputRequest *request;
@property (nonatomic) char handled;

- (id)init;
- (void).cxx_destruct;
- (id)initWithEvent:(id)a0 outputRequest:(id)a1;

@end
