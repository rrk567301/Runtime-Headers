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
- (void)coreSessionRouteChangeCompletionHandler:(id)a0 mxSessionID:(unsigned long long)a1 error:(int)a2;
- (void)registerMXCoreSession:(id)a0;
- (id)copyCoreSessionForID:(id)a0;
- (id)copyCoreSessionForMXSessionID:(id)a0;
- (void)unregisterMXCoreSession:(id)a0;
- (unsigned long long)getCoreSessionCount;
- (id)getSharedMXAuRATranslator;
- (void)updateCoreSessionIDToAudioSessionIDMap:(id)a0 audioSessionToken:(unsigned int)a1;
- (id)getAudioSessionIDForCoreSessionID:(id)a0;
- (void)notifySessionsAfterRouteChange:(id)a0 mxSessionIDs:(id)a1;
- (id)modifyConfigurationChangeDescriptionPayload:(id)a0 removeActivatingSession:(BOOL)a1 mxSessionID:(id)a2;
- (void)postNotificationUtility:(id)a0 payload:(id)a1;

@end
