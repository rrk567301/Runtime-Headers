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
- (id)_getHistoricalData;
- (void)tryLoadCorrelationMatricesImmediately;
- (void)_subscribeToMicroLocationEvents;
- (BOOL)_loadCorrelationMatrices;
- (void).cxx_destruct;
- (id)_getActionKeyCorrelationMatrix;
- (void)_writeAppLaunchCorrelationMatrix:(id)a0 actionKeyCorrelationMatrix:(id)a1;
- (double)popularityAtCurrentMicroLocationForApp:(id)a0;
- (id)initWithMicroLocationStream:(id)a0 appInFocusStream:(id)a1 combinedIntentStream:(id)a2 directory:(id)a3 forTesting:(BOOL)a4;
- (double)popularityAtCurrentMicroLocationForActionKey:(id)a0;
- (id)init;
- (void)_receivedNotificationOfNewMicroLocation:(id)a0;
- (id)_getAppLaunchCorrelationMatrix;
- (void)dealloc;

@end
