@class MTRDataTypeLocationDescriptorStruct, MTRServiceAreaClusterLandmarkInfoStruct;

@interface MTRServiceAreaClusterAreaInfoStruct : NSObject <NSCopying>

@property (copy, nonatomic) MTRDataTypeLocationDescriptorStruct *locationInfo;
@property (copy, nonatomic) MTRServiceAreaClusterLandmarkInfoStruct *landmarkInfo;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
