@class NSString, CBPairingAgent, NSData, NSMutableDictionary, CBXpcConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CBManager : NSObject <CBXpcConnectionDelegate, CBPairingAgentParentDelegate> {
    CBXpcConnection *_connection;
    CBPairingAgent *_pairingAgent;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_cnxDict;
}

@property (class, readonly, nonatomic) long long authorization;

@property (nonatomic) long long state;
@property (nonatomic) BOOL tccComplete;
@property (nonatomic) BOOL tccApproved;
@property (nonatomic) BOOL tccRequired;
@property (readonly, retain, nonatomic) CBPairingAgent *sharedPairingAgent;
@property (copy, nonatomic) NSData *advertisingAddress;
@property (readonly, nonatomic) long long advertisingAddressType;
@property (copy, nonatomic) NSData *nonConnectableAdvertisingAddress;
@property (readonly, nonatomic) long long nonConnectableAdvertisingAddressType;
@property (copy, nonatomic) NSData *nonConnectableSecondaryAdvertisingAddress;
@property (readonly, nonatomic) long long nonConnectableSecondaryAdvertisingAddressType;
@property (readonly) NSString *localAddressString;
@property (readonly) NSString *localName;
@property (readonly, nonatomic) long long authorization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)checkIfExtension;
+ (BOOL)tccAvailable;
+ (int)preflightCheckForTCC;
+ (unsigned short)retrieveCurrentProcessSessionCount;

- (void)xpcConnectionDidReset;
- (id)createCnxWithInfo:(id)a0;
- (void)checkForTCC;
- (void)setWHBMsgReplyHandler:(id /* block */)a0;
- (BOOL)sendMsg:(unsigned short)a0 args:(id)a1;
- (BOOL)sendRawCommand:(unsigned short)a0 data:(id)a1 completionHandler:(id /* block */)a2;
- (id)peerWithInfo:(id)a0;
- (id)getWhbLocalIdForRemoteId:(id)a0;
- (void)startWithQueue:(id)a0 options:(id)a1 sessionType:(int)a2;
- (BOOL)isMsgAllowedAlways:(unsigned short)a0;
- (id)getCnxInstanceForIdentifier:(id)a0;
- (void)triggerBTErrorReport:(long long)a0;
- (void)removeWhbRemoteId:(id)a0;
- (void)removeCnxInstanceForIdentifier:(id)a0;
- (BOOL)getCBPrivacySupported;
- (void)extractLocalDeviceStatesDictionary:(id)a0;
- (void)closeL2CAPChannelForPeerUUID:(id)a0 withPsm:(unsigned short)a1;
- (BOOL)sendMsg:(unsigned short)a0 args:(id)a1 withReply:(id /* block */)a2;
- (void)doneWithTCC;
- (void)setWhbLocalId:(id)a0 forRemoteId:(id)a1;
- (void)checkBTTCCAuth;
- (void)handleLocalDeviceStateUpdatedMsg:(id)a0;
- (BOOL)sendDebugMsg:(unsigned short)a0 args:(id)a1;
- (void)performTCCCheck;
- (void)_handleAdvertisingAddressChanged:(id)a0;
- (void)didReceiveForwardedMessageForCBManager:(id)a0;
- (id)sharedPairingAgent;
- (void)retrieveBundle:(id)a0 sessionCountWithCompletion:(id /* block */)a1;
- (void)setConnectionTargetQueue:(id)a0;
- (id)getCurrentQueue;
- (id)sendDebugSyncMsg:(unsigned short)a0 args:(id)a1;
- (void)queryBluetoothStatus:(id)a0 completion:(id /* block */)a1;
- (void)getLocalDeviceState;
- (BOOL)isMsgAllowedWhenOff:(unsigned short)a0;
- (void)xpcConnectionDidReceiveMsg:(unsigned short)a0 args:(id)a1;
- (id)sendSyncMsg:(unsigned short)a0 args:(id)a1;
- (void)handlePairingAgentMsg:(unsigned short)a0 args:(id)a1;
- (void)handleStateUpdatedMsg:(id)a0;
- (void)xpcConnectionIsInvalid;
- (void)handleMsg:(unsigned short)a0 args:(id)a1;
- (void)retrieveSupportedResources:(id)a0 subKey:(id)a1 completion:(id /* block */)a2;
- (id)initInternal;
- (void).cxx_destruct;
- (void)dealloc;

@end
