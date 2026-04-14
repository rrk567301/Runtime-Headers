@class MTRDataTypeLocationDescriptorStruct, MTRServiceAreaClusterLandmarkInfoStruct;

@interface MTRServiceAreaClusterAreaInfoStruct : NSObject <NSCopying>

@property (copy, nonatomic) MTRDataTypeLocationDescriptorStruct *locationInfo;
@property (copy, nonatomic) MTRServiceAreaClusterLandmarkInfoStruct *landmarkInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
