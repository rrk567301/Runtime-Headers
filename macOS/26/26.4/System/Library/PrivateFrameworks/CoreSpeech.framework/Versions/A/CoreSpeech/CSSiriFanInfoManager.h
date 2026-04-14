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
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)getCurrentFanInfo:(id /* block */)a0;

@end
