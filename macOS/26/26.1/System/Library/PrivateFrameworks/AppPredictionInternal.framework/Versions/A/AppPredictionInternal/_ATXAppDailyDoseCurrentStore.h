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
- (double)currentDoseFor:(id)a0;
- (id)_getCacheFromFile;
- (void)resetWithDurationMap:(id)a0 on:(id)a1;
- (void)increaseDoseFor:(id)a0 by:(double)a1;
- (void)dealloc;
- (void)closePermanently;
- (void).cxx_destruct;
- (void)_openFd;
- (BOOL)isExpiredAt:(id)a0;
- (void)_overwrite;
- (BOOL)isExpiredNow;
- (id)init;
- (void)_readCacheAndExpiration;

@end
