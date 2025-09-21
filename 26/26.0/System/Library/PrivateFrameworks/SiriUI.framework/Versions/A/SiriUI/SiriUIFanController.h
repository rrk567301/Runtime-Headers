@class NSObject;
@protocol OS_dispatch_queue;

@interface SiriUIFanController : NSObject {
    struct __CFNumber { } *_fanDuckingRequestToken;
    unsigned int _connection;
}

@property (nonatomic) BOOL fanDuckingEnabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fanDispatchQueue;

+ (id)sharedManager;
+ (BOOL)fanDuckingEnabled;

- (unsigned int)_connection;
- (id)init;
- (void).cxx_destruct;
- (void)_setFanDuckingEnabled:(BOOL)a0;
- (void)_setFanDuckingEnabledLegacy:(BOOL)a0;
- (BOOL)isFanDuckingEnabled;

@end
