@class NSNumber, NSString, MTRCameraAVSettingsUserLevelManagementClusterMPTZStruct;

@interface MTRCameraAVSettingsUserLevelManagementClusterMPTZPresetStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *presetID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) MTRCameraAVSettingsUserLevelManagementClusterMPTZStruct *settings;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
