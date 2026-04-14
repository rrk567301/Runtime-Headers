@interface SRFSignpostLog : NSObject

+ (id)sharedInstance;
+ (void)SRFInvokeEvent:(id)a0;
+ (void)SRFInvokeEventReceived:(id)a0;
+ (void)SRFPresentAlertEvent;
+ (void)SRFHoldDarkWakeAssertionEvent;
+ (void)SRFReleaseDarkWakeAssertionEvent;
+ (void)SRFSiriAwakeFromNibEvent;
+ (void)SRFSiriViewWillMoveToWindowEvent;
+ (void)SRFSiriViewDidMoveToWindowEvent;
+ (void)SRFSiriLoadViewEvent;
+ (void)SRFSiriViewDidLoadEvent;
+ (void)SRFSiriViewWillAppearEvent;
+ (void)SRFSiriViewDidAppearEvent;
+ (void)SRFSiriViewWillLayoutEvent;
+ (void)SRFSiriViewDidLayoutEvent;
+ (void)SRFSpeechCreation:(unsigned long long)a0;
+ (void)SRFSpeechVocalizationBegin;
+ (void)SRFSpeechVocalizationEnd;
+ (void)audioManagerPausedMusic;
+ (void)audioManagerUnpausedMusic;
+ (void)audioManagerDuckedAudio;
+ (void)audioManagerUnduckedAudio;
+ (void)audioManagerPausedMediaClient:(id)a0;
+ (void)audioManagerUnpausedMediaClient:(id)a0;

@end
