@class NSDate, NSMutableDictionary, IFSessionState, NSMutableSet, NSNumber, IFInstallQueue;

@interface IFInstallJob : NSObject {
    IFInstallQueue *_installQueue;
    NSMutableDictionary *_installState;
    IFSessionState *_sessionState;
    NSNumber *_sessionID;
    NSMutableSet *_launchServicesPaths;
    struct _modDirs_t { unsigned char notifyKext : 1; unsigned char notifyPrefPane : 1; unsigned char notifyQuickTime : 1; unsigned char notifyComponents : 1; unsigned char notifyAudioPlugIns : 1; } _modDirs;
    int _planFiles;
    int _packageFiles;
    NSDate *_lastMessageSentDate;
}

- (void)dealloc;
- (void)setInstallState:(id)a0;
- (id)installState;
- (id)sessionID;
- (void)setSessionID:(id)a0;
- (id)logDescription;
- (void)sendClientStatusMessage:(id)a0 ofType:(id)a1;
- (void)sendClientError:(id)a0;
- (void)setPartialProgress:(double)a0;
- (void)installJobCompleted:(id)a0;
- (id)initWithSession:(id)a0 withSessionID:(id)a1;
- (void)setInstallQueue:(id)a0;
- (id)installQueue;
- (void)addLaunchServicesPath:(id)a0;
- (struct _modDirs_t { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } *)modDirs;
- (void)addPlanFiles:(int)a0;
- (int)numberOfPlanFiles;
- (void)addPackageFiles:(int)a0;
- (int)numberOfPackageFiles;
- (void)_sendProgressNotificationWithProgress:(id)a0 estimatedTimeRemaining:(id)a1;
- (void)setPartialProgress:(double)a0 estimatedTimeRemaining:(double)a1;

@end
