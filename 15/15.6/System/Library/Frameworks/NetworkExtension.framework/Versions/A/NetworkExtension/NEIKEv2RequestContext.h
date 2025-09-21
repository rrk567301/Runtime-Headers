@interface NEIKEv2RequestContext : NSObject {
    char _requestInitiator;
    char _preventSleepUntilFinished;
    int _requestType;
}

- (void)dealloc;
- (id)description;
- (id)initWithRequestType:(int)a0;
- (void)sendCallbackSuccess:(char)a0 session:(id)a1;

@end
