@class NSString;

@interface IMNetworkMonitor : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ evaluator;
    void /* unknown type, empty encoding */ path;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ networkAvailable;
}

@property (nonatomic, readonly) BOOL isUltraConstrained;
@property (nonatomic, readonly) NSString *remoteHost;
@property (nonatomic, readonly) BOOL immediatelyReachable;

+ (id)createNetworkMonitorWithRemoteHost:(id)a0 delegate:(id)a1 allowsUltraConstrainedNetwork:(BOOL)a2;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (id)initWithEvaluator:(id)a0 remoteHost:(id)a1 delegate:(id)a2;

@end
