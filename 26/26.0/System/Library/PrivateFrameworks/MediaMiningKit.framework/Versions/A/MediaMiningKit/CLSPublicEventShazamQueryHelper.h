@class NSError;
@protocol CLSQueryProtocol;

@interface CLSPublicEventShazamQueryHelper : SwiftNativeNSObject <CLSPublicEventQueryHelperProtocol> {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ isSimulatingTimeout;
    void /* unknown type, empty encoding */ query;
    void /* unknown type, empty encoding */ shouldCancel;
}

@property (nonatomic, readonly) double timeoutInterval;
@property (nonatomic, readonly) long long numberOfRetries;

- (void)cancel;
- (id)init;
- (id)initWith:(id)a0 isSimulatingTimeout:(BOOL)a1;
- (void)launchPublicEventQueryWithCancellerBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)launchQueryWithCancellerBlock:(void (^)(BOOL *))a0 completionBlock:(void (^)(BOOL, NSError *, id<CLSQueryProtocol>))a1;

@end
