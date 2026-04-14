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
- (id)_getActionKeyCorrelationMatrix;
- (BOOL)_loadCorrelationMatrices;
- (void)tryLoadCorrelationMatricesImmediately;
- (id)init;
- (void).cxx_destruct;
- (void)_receivedNotificationOfNewMicroLocation:(id)a0;
- (void)dealloc;
- (id)_getAppLaunchCorrelationMatrix;
- (double)popularityAtCurrentMicroLocationForApp:(id)a0;
- (id)initWithMicroLocationStream:(id)a0 appInFocusStream:(id)a1 combinedIntentStream:(id)a2 directory:(id)a3 forTesting:(BOOL)a4;
- (id)_getHistoricalData;
- (void)_writeAppLaunchCorrelationMatrix:(id)a0 actionKeyCorrelationMatrix:(id)a1;
- (void)_subscribeToMicroLocationEvents;
- (double)popularityAtCurrentMicroLocationForActionKey:(id)a0;

@end
