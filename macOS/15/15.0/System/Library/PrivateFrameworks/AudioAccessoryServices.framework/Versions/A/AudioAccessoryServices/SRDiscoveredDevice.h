@class NSString, NSData, SFDevice;

@interface SRDiscoveredDevice : NSObject

@property (readonly, copy, nonatomic) NSString *btAddress;
@property (readonly, nonatomic) unsigned char connectionState;
@property (readonly, nonatomic) BOOL isNearby;
@property (readonly, nonatomic) unsigned long long inUseBannerBackoffTick;
@property (readonly, nonatomic) NSString *inUseBannerBackoffReason;
@property (readonly, nonatomic) BOOL inUseBannerShown;
@property (readonly, nonatomic) BOOL mutedSpeakerForRemotePhoneCall;
@property (readonly, nonatomic) BOOL nearbyiCloudSignIn;
@property (readonly, nonatomic) int nearbyInEar;
@property (readonly, nonatomic) NSData *nearbyLastRouteHost;
@property (readonly, copy, nonatomic) NSString *nearbyName;
@property (readonly, nonatomic) unsigned char nearbyOutOfCaseTime;
@property (readonly, nonatomic) int nearbyPrevInEar;
@property (readonly, nonatomic) BOOL nearbyPaired;
@property (readonly, nonatomic) unsigned int nearbyProductID;
@property (readonly, nonatomic) unsigned char nearbyConnectedSourceCount;
@property (readonly, nonatomic) long long nearbyStreamState;
@property (readonly, copy, nonatomic) SFDevice *nearbyWxDevice;
@property (readonly, nonatomic) BOOL routeToWxAfterUnhide;
@property (readonly, nonatomic) BOOL userConnectedState;

- (void).cxx_destruct;
- (void)_setNearbyConnectedSourceCount:(unsigned char)a0;
- (void)_setNearbyName:(id)a0;
- (void)_setBtAddress:(id)a0;
- (void)_setConnectionState:(unsigned char)a0;
- (void)_setInUseBannerBackoffReason:(id)a0;
- (void)_setInUseBannerBackoffTick:(unsigned long long)a0;
- (void)_setInUseBannerShown:(BOOL)a0;
- (void)_setIsNearby:(BOOL)a0;
- (void)_setMutedSpeakerForRemotePhoneCall:(BOOL)a0;
- (void)_setNearbyInEar:(int)a0;
- (void)_setNearbyLastRouteHost:(id)a0;
- (void)_setNearbyOutOfCaseTime:(unsigned char)a0;
- (void)_setNearbyPaired:(BOOL)a0;
- (void)_setNearbyPrevInEar:(int)a0;
- (void)_setNearbyProductID:(unsigned int)a0;
- (void)_setNearbyStreamState:(long long)a0;
- (void)_setNearbyWxDevice:(id)a0;
- (void)_setNearbyiCloudSignIn:(BOOL)a0;
- (void)_setRouteToWxAfterUnhide:(BOOL)a0;
- (void)_setUserConnectedState:(BOOL)a0;

@end
