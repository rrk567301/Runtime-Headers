@class NSString, NSMutableDictionary, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface _ATXAppDailyDoseCurrentStore : NSObject {
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic int _fd;
    NSMutableDictionary *_cache;
    NSDate *_expires;
}

- (id)initWithPath:(id)a0;
- (BOOL)isExpiredNow;
- (void)increaseDoseFor:(id)a0 by:(double)a1;
- (void)dealloc;
- (id)_getCacheFromFile;
- (void)_overwrite;
- (void)closePermanently;
- (void)_openFd;
- (double)currentDoseFor:(id)a0;
- (void)resetWithDurationMap:(id)a0 on:(id)a1;
- (id)init;
- (BOOL)isExpiredAt:(id)a0;
- (void)_readCacheAndExpiration;
- (void).cxx_destruct;

@end
