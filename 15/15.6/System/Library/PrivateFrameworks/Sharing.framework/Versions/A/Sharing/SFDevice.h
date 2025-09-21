@class NSString, NSArray, NSUUID, SFBLEDevice;

@interface SFDevice : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *accountAltDSID;
@property (copy, nonatomic) NSString *accountID;
@property (nonatomic) int audioRoutingScore;
@property (copy, nonatomic) NSArray *batteryInfo;
@property (retain, nonatomic) SFBLEDevice *bleDevice;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (nonatomic) unsigned char deviceActionType;
@property (nonatomic) unsigned char deviceClassCode;
@property (nonatomic) unsigned int deviceFlags;
@property (nonatomic) unsigned char deviceModelCode;
@property (nonatomic) long long distance;
@property (nonatomic) char hasProblem;
@property (nonatomic) unsigned int hotspotInfo;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) char needsSetup;
@property (nonatomic) char paired;
@property (copy, nonatomic) NSString *requestSSID;
@property (nonatomic) char testMode;
@property (nonatomic) char wakeDevice;
@property (nonatomic) char autoUnlockEnabled;
@property (nonatomic) char autoUnlockWatch;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, nonatomic) char duetSync;
@property (readonly, nonatomic) char enhancedDiscovery;
@property (copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) char idsIdentifierConflict;
@property (readonly, nonatomic) char inDiscoverySession;
@property (nonatomic) char isBLEDeviceReplaced;
@property (readonly, copy, nonatomic) NSString *mediaRemoteID;
@property (readonly, copy, nonatomic) NSString *mediaRouteID;
@property (readonly, nonatomic) char needsAWDL;
@property (readonly, nonatomic) char needsKeyboard;
@property (readonly, nonatomic) char needsKeyboardOnly;
@property (readonly, nonatomic) unsigned long long problemFlags;
@property (readonly, nonatomic) NSString *rapportIdentifier;
@property (nonatomic) unsigned int systemPairState;
@property (nonatomic) char watchLocked;
@property (readonly, nonatomic) char wifiP2P;
@property (nonatomic) unsigned char osVersion;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateWithBLEDevice:(id)a0;
- (void)updateWithPairedPeer:(id)a0;
- (void)updateWithRPIdentity:(id)a0;

@end
