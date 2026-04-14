@class ATXMicroLocationVisitStream, NSString, ATXCombinedIntentStream, NSUUID, ATXAppInFocusStream, _PASLock;

@interface ATXAppLaunchMicroLocation : NSObject {
    _PASLock *_lock;
    ATXMicroLocationVisitStream *_microLocationStream;
    ATXCombinedIntentStream *_combinedIntentStream;
    NSString *_path;
    ATXAppInFocusStream *_appInFocusStream;
    NSUUID *_microLocationSchedulerToken;
}

- (void)train;
- (void)tryLoadCorrelationMatricesImmediately;
- (BOOL)_loadCorrelationMatrices;
- (id)_getAppLaunchCorrelationMatrix;
- (void)dealloc;
- (id)_getActionKeyCorrelationMatrix;
- (void)_writeAppLaunchCorrelationMatrix:(id)a0 actionKeyCorrelationMatrix:(id)a1;
- (void).cxx_destruct;
- (void)_subscribeToMicroLocationEvents;
- (double)popularityAtCurrentMicroLocationForActionKey:(id)a0;
- (void)_receivedNotificationOfNewMicroLocation:(id)a0;
- (id)initWithMicroLocationStream:(id)a0 appInFocusStream:(id)a1 combinedIntentStream:(id)a2 directory:(id)a3 forTesting:(BOOL)a4;
- (double)popularityAtCurrentMicroLocationForApp:(id)a0;
- (id)_getHistoricalData;
- (id)init;

@end
