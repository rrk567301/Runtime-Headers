@class NSString, MXRoutingContextModificationMetrics, NSArray;

@interface MXRoutingContextCallbackHelper : NSObject {
    id mFigRoutingContextToken;
    id mHandleAuthDelegateToken;
    NSString *mRouteConfigUpdateID;
    NSString *mCorrelationID;
    void /* function */ *mCallback;
    void *mContext;
    MXRoutingContextModificationMetrics *mRoutingContextModificationMetrics;
    NSArray *mPreviousRouteDescriptors;
    NSArray *mCurrentRouteDescriptors;
    struct OpaqueFigRoutingContext { } *mFigRoutingContext;
    BOOL mDidRequireAuthorization;
}

+ (id)_sharedLock;

- (void)dealloc;
- (BOOL)_didRouteChangeFinish:(struct __CFString { } *)a0;
- (void)_handleAuthDelegate:(id)a0;
- (void)_routeConfigUpdated:(id)a0;
- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext { } *)a0 routeConfigUpdateID:(id)a1 correlationID:(id)a2 callback:(void /* function */ *)a3 context:(void *)a4 numberOfEndpoints:(id)a5;

@end
