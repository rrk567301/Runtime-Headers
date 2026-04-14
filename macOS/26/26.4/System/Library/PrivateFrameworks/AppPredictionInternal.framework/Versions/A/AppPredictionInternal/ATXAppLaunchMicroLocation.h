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
- (double)popularityAtCurrentMicroLocationForApp:(id)a0;
- (BOOL)_loadCorrelationMatrices;
- (id)initWithMicroLocationStream:(id)a0 appInFocusStream:(id)a1 combinedIntentStream:(id)a2 directory:(id)a3 forTesting:(BOOL)a4;
- (void)_receivedNotificationOfNewMicroLocation:(id)a0;
- (double)popularityAtCurrentMicroLocationForActionKey:(id)a0;
- (id)_getHistoricalData;
- (void).cxx_destruct;
- (void)_writeAppLaunchCorrelationMatrix:(id)a0 actionKeyCorrelationMatrix:(id)a1;
- (id)_getActionKeyCorrelationMatrix;
- (id)init;
- (id)_getAppLaunchCorrelationMatrix;
- (void)_subscribeToMicroLocationEvents;
- (void)tryLoadCorrelationMatricesImmediately;
- (void)dealloc;

@end
