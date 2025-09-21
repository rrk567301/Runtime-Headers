@class NSUUID, NSNumber, NSString;

@interface CKDVolume : NSObject

@property (readonly, nonatomic) NSUUID *volumeUUID;
@property (readonly, nonatomic) NSNumber *deviceID;
@property (readonly, nonatomic) NSString *mountPath;
@property (readonly, nonatomic) char isRootVolume;

+ (id)mountedVolumes;
+ (id)volumeForPath:(const char *)a0;

- (id)description;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)initWithVolumeUUID:(id)a0 deviceID:(id)a1 mountToPath:(id)a2;

@end
