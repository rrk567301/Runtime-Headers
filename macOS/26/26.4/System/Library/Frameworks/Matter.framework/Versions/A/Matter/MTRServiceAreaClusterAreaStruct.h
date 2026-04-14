@class NSNumber, MTRServiceAreaClusterAreaInfoStruct;

@interface MTRServiceAreaClusterAreaStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *areaID;
@property (copy, nonatomic) NSNumber *mapID;
@property (copy, nonatomic) MTRServiceAreaClusterAreaInfoStruct *areaInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
