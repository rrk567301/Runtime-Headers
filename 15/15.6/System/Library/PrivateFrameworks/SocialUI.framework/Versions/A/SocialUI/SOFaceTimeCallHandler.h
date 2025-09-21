@class NSTimer;
@protocol SOFaceTimeCallHandlerDelegate;

@interface SOFaceTimeCallHandler : NSObject

@property (weak, nonatomic) NSTimer *faceTimeMultiwayCallTimer;
@property (weak, nonatomic) id<SOFaceTimeCallHandlerDelegate> delegate;
@property (readonly, nonatomic) char hasActiveFaceTimeCall;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)updateIfNeeded;
- (id)chat;
- (void)_startFaceTimeMultiwayCallTimer;
- (char)_conversationStateDidChange:(id)a0;
- (void)_faceTimeMultiwayCallTimerDidFire:(id)a0;
- (void)_handleMultiwayConversationChanged:(id)a0;
- (char)_shouldStartFaceTimeMultiwayCallTimer;
- (void)_startFaceTimeMultiwayCallTimerIfNeeded;
- (void)_stopFaceTimeMultiwayCallTimer;
- (char)hasActiveFaceTimeCall;
- (void)infoButtonClicked;
- (void)joinCall;
- (void)registerForEventNotifications;

@end
