@class NSString, _ATXDuetHelper, ATXCombinedIntentStream, ATXAppInFocusStream, _PASLock;

@interface ATXAppLaunchMicroLocation : NSObject {
    _PASLock *_lock;
    _ATXDuetHelper *_duetHelper;
    ATXCombinedIntentStream *_combinedIntentStream;
    NSString *_path;
    ATXAppInFocusStream *_appInFocusStream;
}

- (void)train;
- (void)_subscribeToDKInsertionEvents;
- (double)popularityAtCurrentMicroLocationForActionKey:(id)a0;
- (void)_writeAppLaunchCorrelationMatrix:(id)a0 actionKeyCorrelationMatrix:(id)a1;
- (id)_getHistoricalData;
- (id)_getAppLaunchCorrelationMatrix;
- (id)init;
- (void)_receivedNotificationOfNewMicroLocation;
- (void)tryLoadCorrelationMatricesImmediately;
- (BOOL)_loadCorrelationMatrices;
- (id)initWithDuetHelper:(id)a0 appInFocusStream:(id)a1 combinedIntentStream:(id)a2 directory:(id)a3 forTesting:(BOOL)a4;
- (double)popularityAtCurrentMicroLocationForApp:(id)a0;
- (id)_getActionKeyCorrelationMatrix;
- (void).cxx_destruct;

@end
