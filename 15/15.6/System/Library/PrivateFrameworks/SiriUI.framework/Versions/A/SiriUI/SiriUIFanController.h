@class NSObject;
@protocol OS_dispatch_queue;

@interface SiriUIFanController : NSObject {
    struct __CFNumber { } *_fanDuckingRequestToken;
    unsigned int _connection;
}

@property (nonatomic) char fanDuckingEnabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fanDispatchQueue;

+ (id)sharedManager;
+ (char)fanDuckingEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)_setFanDuckingEnabledLegacy:(char)a0;
- (char)isFanDuckingEnabled;

@end
