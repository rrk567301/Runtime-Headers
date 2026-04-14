@class NSString, HMDDevice, NSMutableDictionary;

@interface HMDCameraSessionID : HMFObject <NSCopying>

@property (readonly) NSString *sessionID;
@property (readonly) NSString *descriptionString;
@property (readonly) NSString *cameraSessionAppID;
@property (readonly) HMDDevice *remoteDevice;
@property (readonly, getter=isSPIClient) BOOL spiClient;
@property (readonly) NSMutableDictionary *milestones;
@property (readonly) NSString *deviceSectionName;
@property (readonly) NSMutableDictionary *deviceMilestones;

+ (id)applicationIdentifierForMessage:(id)a0;
+ (id)millisecondsSince1970;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0 remoteDevice:(id)a1 cameraSessionAppID:(id)a2 descriptionString:(id)a3 spiClient:(BOOL)a4;
- (void)markMilestoneFor:(id)a0;
- (void)markMilestoneForPath:(id)a0;
- (void)setParameterFor:(id)a0 value:(id)a1;
- (void)setParameterForPath:(id)a0 value:(id)a1;
- (void)addParameterFor:(id)a0 value:(id)a1;
- (void)_prepareDeviceMilestones;

@end
