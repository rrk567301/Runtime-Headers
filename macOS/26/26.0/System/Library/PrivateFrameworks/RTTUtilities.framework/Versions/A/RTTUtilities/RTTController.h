@class NSObject, NSString, NSMutableDictionary, AXDispatchTimer, RTTTranscriptionController, NSMutableArray;
@protocol OS_dispatch_queue, HCHeardControllerProtocol;

@interface RTTController : NSObject <RTTCallDelegate, TUCallCapabilitiesDelegate, RTTTranscriptionControllerDelegate> {
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableDictionary *_localSettingsCache;
    AXDispatchTimer *_preferredRelayCoalescer;
    AXDispatchTimer *_callUpdateCoalescer;
}

@property (retain, nonatomic) RTTTranscriptionController *transcriber;
@property (retain, nonatomic) NSMutableArray *rttCalls;
@property (weak, nonatomic) id<HCHeardControllerProtocol> delegate;
@property (copy, nonatomic) id /* block */ serverInvalidateCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void)dealloc;
- (id)init;
- (void)didChangeTelephonyCallingSupport;
- (void).cxx_destruct;
- (void)callDidConnect:(id)a0;
- (id)_callForUUIDWithoutRefresh:(id)a0;
- (void)_handlePreferredRelayNumberUpdate;
- (void)_refreshCurrentCallList;
- (void)_refreshCurrentCallListWithExistingCalls:(id)a0;
- (void)_requestNotificationAuthorization;
- (void)_requestNotificationAuthorizationIfNecessary;
- (void)_updateConversationControllerWithTranscription:(id)a0 type:(long long)a1 callUUID:(id)a2;
- (void)_updateConversationControllerWithTranslatedTranscription:(id)a0 translation:(id)a1 type:(long long)a2 callUUID:(id)a3;
- (id)callForUUID:(id)a0;
- (void)clientRemoved:(id)a0;
- (void)dismissRTTFirstUseAlert;
- (id)displayCallPrompt:(id)a0;
- (void)displayRTTDowngradeAlert;
- (void)displayRTTFirstUseAlert;
- (id)handleDatabaseRequest:(id)a0;
- (id)handleDictionaryRequest:(id)a0;
- (id)handleIncomingNotificationSuppressionChange:(id)a0;
- (id)handleMediaAction:(id)a0;
- (id)handleRTTMessageInjection:(id)a0;
- (id)handleRTTTranslationLocaleMessage:(id)a0;
- (id)handleRTTVoicemailMessage:(id)a0;
- (id)handleSettingsRequest:(id)a0;
- (void)handleUpdatedCalls:(id)a0;
- (BOOL)invalidateServerCaches:(id)a0;
- (id)responseFromCallWithID:(id)a0 forRequest:(id)a1 options:(id)a2;
- (void)transcriptionDidStart:(id)a0 forCallUUID:(id)a1;
- (void)transcriptionDidUpdate:(id)a0 forCallUUID:(id)a1;
- (void)ttyCall:(id)a0 didReceiveString:(id)a1 forUtterance:(id)a2;
- (void)ttyCall:(id)a0 didSendRemoteString:(id)a1 forUtterance:(id)a2;
- (void)ttyCall:(id)a0 didUpdateTranslation:(id)a1 forUtterance:(id)a2;
- (void)ttyCall:(id)a0 setVisible:(BOOL)a1 serviceUpdate:(id)a2;

@end
