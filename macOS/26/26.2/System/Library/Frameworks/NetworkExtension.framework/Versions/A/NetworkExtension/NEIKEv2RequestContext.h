@interface NEIKEv2RequestContext : NSObject {
    BOOL _requestInitiator;
    BOOL _preventSleepUntilFinished;
}

@property (readonly, nonatomic) int requestType;

- (id)description;
- (void)dealloc;
- (void)sendCallbackSuccess:(BOOL)a0 session:(id)a1;

@end
