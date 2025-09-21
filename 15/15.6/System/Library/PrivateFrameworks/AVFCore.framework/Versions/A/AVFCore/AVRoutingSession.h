@class AVRoutingSessionInternal, AVRoutingSessionDestination;

@interface AVRoutingSession : NSObject {
    AVRoutingSessionInternal *_ivars;
}

@property (readonly) AVRoutingSessionDestination *destination;
@property (readonly) char establishedAutomaticallyFromLikelyDestination;

- (void)dealloc;

@end
