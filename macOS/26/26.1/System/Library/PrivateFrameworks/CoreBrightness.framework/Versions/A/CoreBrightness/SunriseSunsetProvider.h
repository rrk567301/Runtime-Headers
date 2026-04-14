@class _CDContextualChangeRegistration, _CDClientContext, NSDictionary, _CDContextualPredicate, _CDContextualKeyPath, NSObject;
@protocol OS_os_log, OS_dispatch_semaphore;

@interface SunriseSunsetProvider : NSObject {
    NSObject<OS_os_log> *_logHandle;
    _CDClientContext *_duetContextStore;
    _CDContextualKeyPath *_duetKeyPath;
    _CDContextualChangeRegistration *_duetRegistration;
    NSDictionary *_duetInfo;
    NSObject<OS_dispatch_semaphore> *_duetDispatchSemaphore;
    BOOL _sunriseSunsetNotificationEnabled;
    id /* block */ _callbackBlock;
    id /* block */ _duetCallback;
    _CDContextualPredicate *_predicate;
}

- (void)cancel;
- (void)unregisterNotification;
- (void)unregisterBlock;
- (id)copySunriseSunsetInfo:(int)a0;
- (void)dealloc;
- (id)copySunsetSunriseInfoFromContext;
- (id)initWithCallback:(id /* block */)a0;
- (void)updateSunriseSunsetInfo;
- (void)registerBlock:(id /* block */)a0;

@end
