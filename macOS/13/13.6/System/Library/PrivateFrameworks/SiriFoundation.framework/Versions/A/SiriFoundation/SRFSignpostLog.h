@interface SRFSignpostLog : NSObject

+ (id)sharedInstance;
+ (void)SRFInvokeEvent:(id)a0;
+ (void)SRFHoldDarkWakeAssertionEvent;
+ (void)SRFPresentAlertEvent;
+ (void)SRFSiriAwakeFromNibEvent;
+ (void)SRFSiriViewDidAppearEvent;
+ (void)SRFSiriViewDidLoadEvent;
+ (void)SRFSiriViewWillLayoutEvent;
+ (void)SRFSpeechCreation:(unsigned long long)a0;
+ (void)SRFSpeechVocalizationEnd;
+ (void)SRFSiriViewDidMoveToWindowEvent;
+ (void)SRFInvokeEventReceived:(id)a0;
+ (void)SRFReleaseDarkWakeAssertionEvent;
+ (void)SRFSiriLoadViewEvent;
+ (void)SRFSiriViewDidLayoutEvent;
+ (void)SRFSiriViewWillAppearEvent;
+ (void)SRFSiriViewWillMoveToWindowEvent;
+ (void)SRFSpeechVocalizationBegin;
+ (void)audioManagerDuckedAudio;
+ (void)audioManagerPausedMediaClient:(id)a0;
+ (void)audioManagerPausedMusic;
+ (void)audioManagerUnduckedAudio;
+ (void)audioManagerUnpausedMediaClient:(id)a0;
+ (void)audioManagerUnpausedMusic;

@end
