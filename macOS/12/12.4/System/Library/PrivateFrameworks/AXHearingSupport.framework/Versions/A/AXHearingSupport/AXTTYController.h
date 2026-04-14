@class NSString, NSMutableArray;

@interface AXTTYController : NSObject <TTYCallDelegate>

@property (retain, nonatomic) NSMutableArray *ttyCalls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)callDidConnect:(id)a0;
- (void)handleUpdatedCalls:(id)a0;
- (void)displayRTTFirstUseAlert;
- (id)callForUUID:(id)a0;
- (void)dismissRTTFirstUseAlert;
- (id)handleDatabaseRequest:(id)a0;
- (id)handleDictionaryRequest:(id)a0;
- (id)handleSettingsRequest:(id)a0;
- (id)displayCallPrompt:(id)a0;
- (id)handleIncomingNotificationSuppressionChange:(id)a0;
- (void)telephonySupportDidChange:(id)a0;
- (void)ttyCall:(id)a0 didReceiveCharacter:(unsigned short)a1 forUtterance:(id)a2;

@end
