@class TUCall, NSString, AXDispatchTimer, NSMutableString, NSDictionary, RTTConversation, NSObject, AVCVirtualTTYDevice;
@protocol OS_dispatch_queue, RTTCallDelegate;

@interface RTTCall : NSObject <AVCVirtualTTYDeviceDelegate> {
    long long _ttyMode;
    NSMutableString *_garbageCollection;
    AXDispatchTimer *_garbageCharacterStripperTimer;
    AXDispatchTimer *_incomingMessageTimeout;
    AXDispatchTimer *_outgoingMessageTimeout;
}

@property (retain, nonatomic) AVCVirtualTTYDevice *ttyDevice;
@property (retain, nonatomic) RTTConversation *conversation;
@property (retain, nonatomic) TUCall *call;
@property (retain, nonatomic) NSDictionary *substitutions;
@property (nonatomic) BOOL isVisibleSent;
@property (weak, nonatomic) id<RTTCallDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void)dealloc;
- (void)stop;
- (BOOL)isLocallyHosted;
- (void).cxx_destruct;
- (void)registerNotifications;
- (id)initWithCall:(id)a0;
- (void)sendString:(id)a0;
- (void)device:(id)a0 didReceiveCharacter:(unsigned short)a1;
- (void)device:(id)a0 didReceiveText:(id)a1;
- (void)device:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)deviceDidStop:(id)a0;
- (void)mediaServerDied;
- (BOOL)_handleInitialGarbageTextFromTTY:(id)a0 device:(id)a1;
- (void)_postLocalNotificationForText:(id)a0;
- (void)_processMessageTimeoutForMe:(BOOL)a0;
- (id)_processText:(id)a0 withDevice:(id)a1;
- (void)callDidReceiveText:(id)a0 forUtterance:(id)a1;
- (void)callStatusDidChange:(id)a0;
- (id)formatMessage:(id)a0 withType:(long long)a1 isMe:(BOOL)a2;
- (void)recreateTTYDevice:(id)a0;
- (void)saveTranscribedTextForConversation:(id)a0 isNew:(BOOL)a1;
- (void)saveTranslatedTranscribedTextForConversation:(id)a0 translatedText:(id)a1 isNew:(BOOL)a2;
- (void)sendToTTYDeviceWithString:(id)a0;
- (void)toggleSystemOutputMute:(BOOL)a0;

@end
