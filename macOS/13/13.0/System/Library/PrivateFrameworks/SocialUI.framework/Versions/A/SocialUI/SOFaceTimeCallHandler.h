@class NSTimer;
@protocol SOFaceTimeCallHandlerDelegate;

@interface SOFaceTimeCallHandler : NSObject

@property (weak, nonatomic) NSTimer *faceTimeMultiwayCallTimer;
@property (weak, nonatomic) id<SOFaceTimeCallHandlerDelegate> delegate;
@property (readonly, nonatomic) BOOL hasActiveFaceTimeCall;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)updateIfNeeded;
- (id)chat;
- (void)_handleMultiwayConversationChanged:(id)a0;
- (void)_faceTimeMultiwayCallTimerDidFire:(id)a0;
- (void)registerForEventNotifications;
- (BOOL)_shouldStartFaceTimeMultiwayCallTimer;
- (void)_startFaceTimeMultiwayCallTimer;
- (void)_startFaceTimeMultiwayCallTimerIfNeeded;
- (void)_stopFaceTimeMultiwayCallTimer;
- (void)joinCall;
- (void)infoButtonClicked;
- (BOOL)_conversationStateDidChange:(id)a0;
- (BOOL)hasActiveFaceTimeCall;

@end
