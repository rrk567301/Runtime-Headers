@class IDSDevice, NSSet, NSMutableDictionary, NSString, RPCompanionLinkClient, RPCompanionLinkDevice;
@protocol HUNearbyDeviceDelegate;

@interface HUNearbyDevice : NSObject

@property (retain) RPCompanionLinkClient *client;
@property (nonatomic, getter=isActivating) BOOL activating;
@property (nonatomic) BOOL shouldTrack;
@property (retain, nonatomic) NSMutableDictionary *previousMessageCache;
@property (retain, nonatomic) NSSet *cachableKeys;
@property (retain, nonatomic) NSString *identifierWithoutDevice;
@property (retain, nonatomic) RPCompanionLinkDevice *device;
@property (nonatomic) unsigned long long connectionStatus;
@property (retain, nonatomic) IDSDevice *idsDevice;
@property (weak, nonatomic) id<HUNearbyDeviceDelegate> delegate;

+ (id)nearbyDeviceWithPeerDevice:(id)a0;
+ (id)nearbyDeviceWithIDSDevice:(id)a0;
+ (id)nearbyDeviceWithIDSIdentifier:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)name;
- (void).cxx_destruct;
- (id)identifier;
- (void)reset;
- (void)stop;
- (void)sendMessage:(id)a0;
- (id)initWithIDSDevice:(id)a0;
- (id)initWithIDSIdentifier:(id)a0;
- (BOOL)representsPeerDevice:(id)a0;
- (void)purgeMessageCache;
- (BOOL)representsAWatch;
- (id)initWithPeerDevice:(id)a0;
- (void)setupSessionIfNecessary;

@end
