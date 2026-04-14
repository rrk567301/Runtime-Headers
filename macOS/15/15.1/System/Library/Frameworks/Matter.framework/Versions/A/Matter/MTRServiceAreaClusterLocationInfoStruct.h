@class MTRServiceAreaClusterHomeLocationStruct, NSNumber;

@interface MTRServiceAreaClusterLocationInfoStruct : NSObject <NSCopying>

@property (copy, nonatomic) MTRServiceAreaClusterHomeLocationStruct *locationInfo;
@property (copy, nonatomic) NSNumber *landmarkTag;
@property (copy, nonatomic) NSNumber *positionTag;
@property (copy, nonatomic) NSNumber *surfaceTag;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
