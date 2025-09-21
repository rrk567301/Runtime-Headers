@class NSError, NSDictionary, NSArray;

@interface DTTimerClient : NSObject {
    void /* unknown type, empty encoding */ _clientID;
    void /* unknown type, empty encoding */ _environmentStorage;
    void /* function */ _error;
    void /* function */ eventHandler;
    void /* unknown type, empty encoding */ _lock;
    void /* function */ _timerMap;
    void /* unknown type, empty encoding */ _requestContext;
    void /* unknown type, empty encoding */ _xpcClientCached;
}

@property (class, nonatomic, readonly) unsigned long long statusFlags;

@property (nonatomic) BOOL _activateCalled;
@property (nonatomic, copy) NSError *_error;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, copy) id /* block */ eventHandler;
@property (nonatomic) unsigned long long _initTicks;
@property (nonatomic) BOOL _invalidateCalled;
@property (nonatomic) BOOL _monitorMode;
@property (nonatomic) BOOL _monitorSessionStarted;
@property (nonatomic, copy) NSDictionary *_timerMap;
@property (nonatomic, readonly) NSArray *timers;
@property (nonatomic, readonly) NSArray *mtAlarms;
@property (nonatomic, readonly) NSArray *mtTimers;

+ (id)fetchTimersAndReturnError:(id *)a0;

- (void)dealloc;
- (void)invalidate;
- (id)init;
- (id)initWithDispatchQueue:(id)a0;
- (void)activate;
- (void).cxx_destruct;
- (void)dismissTimer:(id)a0 completionHandler:(id /* block */)a1;
- (void)addTimer:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchTimersWithCompletionHandler:(id /* block */)a0;
- (id)initWithDispatchQueue:(id)a0 homeKitAccessoryID:(id)a1;
- (void)removeTimer:(id)a0 completionHandler:(id /* block */)a1;
- (void)snoozeTimer:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateTimer:(id)a0 completionHandler:(id /* block */)a1;

@end
