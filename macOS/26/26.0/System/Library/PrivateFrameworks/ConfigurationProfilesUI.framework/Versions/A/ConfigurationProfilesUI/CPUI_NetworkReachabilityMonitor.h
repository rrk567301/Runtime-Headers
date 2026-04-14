@class NSMutableDictionary, NSObject;
@protocol OS_nw_path_monitor;

@interface CPUI_NetworkReachabilityMonitor : NSObject

@property (nonatomic, getter=isNetworkReachable) BOOL networkReachable;
@property (readonly, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor;
@property (readonly, nonatomic) NSMutableDictionary *completionsByUUID;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)callCompletionForUUID:(id)a0 timedOut:(BOOL)a1;
- (void)callAllCompletionsTimedOut:(BOOL)a0;
- (void)updateReachability:(BOOL)a0;
- (void)waitForNetworkReachabilityWithTimeout:(double)a0 completion:(id /* block */)a1;

@end
