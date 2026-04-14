@class NSUUID, NSNumber, NSString;

@interface CKDVolume : NSObject

@property (readonly, nonatomic) NSUUID *volumeUUID;
@property (readonly, nonatomic) NSNumber *deviceID;
@property (readonly, nonatomic) NSString *mountPath;
@property (readonly, nonatomic) BOOL isRootVolume;

+ (id)volumeForPath:(const char *)a0;
+ (id)mountedVolumes;

- (id)initWithVolumeUUID:(id)a0 deviceID:(id)a1 mountToPath:(id)a2;
- (void).cxx_destruct;
- (id)description;
- (id)CKPropertiesDescription;

@end
