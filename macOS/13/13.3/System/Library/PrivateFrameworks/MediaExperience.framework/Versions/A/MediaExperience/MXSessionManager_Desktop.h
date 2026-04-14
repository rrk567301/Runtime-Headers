@class MXAuRATranslator, NSMutableDictionary;

@interface MXSessionManager_Desktop : NSObject {
    MXAuRATranslator *mMXAuRATranslator;
    NSMutableDictionary *mMXCoreSessionIDToAudioSessionTokenMap;
}

+ (id)sharedInstance;
+ (id)getAudioSessionTranslatedCategory:(id)a0;
+ (id)getAudioSessionTranslatedMode:(id)a0;
+ (id)getMappedMXSessionAudioCategory:(id)a0;
+ (id)getMappedMXSessionAudioMode:(id)a0;

- (void)dealloc;
- (id)init;
- (id)copyCoreSessionForID:(id)a0;
- (id)copyCoreSessionForMXSessionID:(id)a0;
- (void)coreSessionRouteChangeCompletionHandler:(id)a0 mxSessionID:(unsigned long long)a1 error:(int)a2;
- (id)getAudioSessionIDForCoreSessionID:(id)a0;
- (unsigned long long)getCoreSessionCount;
- (id)getSharedMXAuRATranslator;
- (id)modifyConfigurationChangeDescriptionPayload:(id)a0 removeActivatingSession:(BOOL)a1 mxSessionID:(id)a2;
- (void)notifySessionsAfterRouteChange:(id)a0 mxSessionIDs:(id)a1;
- (void)postNotificationUtility:(id)a0 payload:(id)a1;
- (void)registerMXCoreSession:(id)a0;
- (void)unregisterMXCoreSession:(id)a0;
- (void)updateCoreSessionIDToAudioSessionIDMap:(id)a0 audioSessionToken:(unsigned int)a1;

@end
