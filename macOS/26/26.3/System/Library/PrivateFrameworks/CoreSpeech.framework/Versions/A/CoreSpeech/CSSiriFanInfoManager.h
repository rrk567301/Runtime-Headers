@class CSSiriFanInfo, NSObject;
@protocol OS_dispatch_queue;

@interface CSSiriFanInfoManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    double _lastInfoQuery;
    CSSiriFanInfo *_lastFanInfo;
    unsigned int _connection;
}

+ (id)sharedManager;

- (unsigned int)_connection;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)getCurrentFanInfo:(id /* block */)a0;

@end
