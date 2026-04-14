@class NSObject;
@protocol OS_os_log, CBRampManagerI;

@interface CBRingLight : NSObject {
    NSObject<OS_os_log> *_logHandle;
    id<CBRampManagerI> _rampManager;
    BOOL _overridenByUser;
}

@property unsigned long long state;
@property float currentMinNits;
@property (readonly) BOOL isEnabled;
@property (readonly) BOOL isActive;

- (void)dealloc;
- (id)initWithDisplayID:(unsigned long long)a0;
- (void)setRampManager:(id)a0;
- (id)getStatusInfo;
- (float)getTargetMinNits;
- (BOOL)handleDisablementWithPeriod:(id)a0;
- (BOOL)handleEnablementWithMinNits:(id)a0 andPeriod:(id)a1;
- (BOOL)handleMinNitsChange:(id)a0 andPeriod:(id)a1;
- (void)handleMinNitsChangeInternalFor:(float)a0 andPeriod:(float)a1;
- (void)handleUserAdjustmentInNits:(float)a0;

@end
