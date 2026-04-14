@class NSString, MXRoutingContextModificationMetrics, NSArray;

@interface MXRoutingContextCallbackHelper : NSObject {
    id mFigRoutingContextToken;
    NSString *mRouteConfigUpdateID;
    NSString *mCorrelationID;
    void /* function */ *mCallback;
    void *mContext;
    MXRoutingContextModificationMetrics *mRoutingContextModificationMetrics;
    NSArray *mPreviousRouteDescriptors;
    NSArray *mCurrentRouteDescriptors;
    struct OpaqueFigRoutingContext { } *mFigRoutingContext;
}

+ (id)_sharedLock;

- (void)dealloc;
- (BOOL)_didRouteChangeFinish:(struct __CFString { } *)a0;
- (void)_routeConfigUpdated:(id)a0;
- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext { } *)a0 routeConfigUpdateID:(id)a1 correlationID:(id)a2 callback:(void /* function */ *)a3 context:(void *)a4;

@end
