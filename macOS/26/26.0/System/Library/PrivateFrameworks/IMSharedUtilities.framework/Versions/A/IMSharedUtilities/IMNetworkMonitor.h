@class NSString;

@interface IMNetworkMonitor : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ evaluator;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ host;
}

@property (nonatomic, readonly) NSString *remoteHost;
@property (nonatomic, readonly) BOOL immediatelyReachable;
@property (nonatomic, readonly) BOOL isReachableFromPath;
@property (nonatomic, readonly) BOOL isUltraConstrained;
@property (nonatomic, readonly) BOOL isCellular;

+ (id)createNetworkMonitorWithRemoteHost:(id)a0 delegate:(id)a1 allowsUltraConstrainedNetwork:(BOOL)a2;

- (void)clear;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (long long)attachmentPolicy;
- (id)initWithEvaluator:(id)a0 remoteHost:(id)a1 delegate:(id)a2;

@end
