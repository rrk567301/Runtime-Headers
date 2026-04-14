@class APSConnection, NSString, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface ApplePushNotificationHandler : NSObject <APSConnectionDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) APSConnection *apsConnection;
@property (readonly, nonatomic) NSData *apsToken;
@property (readonly, nonatomic) BOOL apsEnabled;
@property (readonly, nonatomic) BOOL apsDevEnvironment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)activate;
+ (void)deactivate;
+ (unsigned long long)currentEnvironment;
+ (BOOL)apnsEnabled;
+ (BOOL)shouldEnableAPNS;
+ (id)stringFromData:(id)a0;
+ (id)apnsTokenString;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didSendOutgoingMessage:(id)a1;
- (void)connection:(id)a0 didFailToSendOutgoingMessage:(id)a1 error:(id)a2;
- (void)connection:(id)a0 didChangeConnectedStatus:(BOOL)a1;
- (void)connectionDidReconnect:(id)a0;
- (void)_createApsConnection;
- (void)_shutdownApsConnection;
- (void)_parseAPSIncomingMessage:(id)a0;
- (void)_parseUserInfo:(id)a0 apnsIdentifier:(unsigned long long)a1;

@end
