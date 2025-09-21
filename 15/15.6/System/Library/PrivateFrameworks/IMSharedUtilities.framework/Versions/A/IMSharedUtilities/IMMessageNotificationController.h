@class IDSService, NSString;

@interface IMMessageNotificationController : NSObject <IDSServiceDelegate>

@property (retain, nonatomic) IDSService *messageNotificationControllerIDSService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(char)a3 error:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)_copyIDForDevice:(id)a0;
- (id)_copyIDSIdentifierOrDefault:(id)a0;
- (char)_deviceIsAudioAccessory:(id)a0;
- (void)_executeCommandFromMessageRequest:(id)a0;
- (char)_isCurrentDeviceAudioAccessory;
- (void)_playTone;
- (void)_sendNotificationMessageRequest:(id)a0 toTokenURI:(id)a1;
- (char)audioAccessoryDeviceWithTokenURIExists:(id)a0;
- (void)sendNotificationMessageToTokenURI:(id)a0 withCommmand:(long long)a1;
- (void)sendNotificationMessageToUniqueID:(id)a0 withCommmand:(long long)a1;

@end
