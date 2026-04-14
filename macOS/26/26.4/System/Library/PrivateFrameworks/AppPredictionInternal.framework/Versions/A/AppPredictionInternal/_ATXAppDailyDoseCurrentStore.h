@class NSString, NSMutableDictionary, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface _ATXAppDailyDoseCurrentStore : NSObject {
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic int _fd;
    NSMutableDictionary *_cache;
    NSDate *_expires;
}

- (void)_openFd;
- (id)initWithPath:(id)a0;
- (void)increaseDoseFor:(id)a0 by:(double)a1;
- (double)currentDoseFor:(id)a0;
- (void)closePermanently;
- (BOOL)isExpiredAt:(id)a0;
- (BOOL)isExpiredNow;
- (void).cxx_destruct;
- (void)_overwrite;
- (id)init;
- (void)_readCacheAndExpiration;
- (id)_getCacheFromFile;
- (void)resetWithDurationMap:(id)a0 on:(id)a1;
- (void)dealloc;

@end
