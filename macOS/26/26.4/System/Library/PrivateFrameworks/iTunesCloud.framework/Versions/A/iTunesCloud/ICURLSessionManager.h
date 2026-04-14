@class NSMutableDictionary, ICURLSession;

@interface ICURLSessionManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessLock;
    NSMutableDictionary *_cachedSessions;
}

@property (class, readonly, nonatomic) ICURLSessionManager *sharedSessionManager;
@property (class, readonly, nonatomic) ICURLSession *defaultSession;
@property (class, readonly, nonatomic) ICURLSession *highPrioritySession;
@property (class, readonly, nonatomic) ICURLSession *unlimitedHighPrioritySession;

- (void).cxx_destruct;
- (id)sessionWithIdentifier:(id)a0 creationBlock:(id /* block */)a1;
- (id)_defaultSessionIdentifierWithQualityOfService:(long long)a0 maxConcurrentRequests:(unsigned long long)a1;
- (id)sessionWithQualityOfService:(long long)a0;
- (id)init;
- (void)addSession:(id)a0 withIdentifier:(id)a1;
- (id)_defaultSessionWithQualityOfService:(long long)a0 maxConcurrentRequests:(unsigned long long)a1;
- (id)sessionWithIdentifier:(id)a0;
- (void)removeSessionWithIdentifier:(id)a0;
- (id)sessionWithIdentifier:(id)a0 configuration:(id)a1;

@end
