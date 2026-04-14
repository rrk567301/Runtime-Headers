@class NSNumber, MTRServiceAreaClusterAreaInfoStruct;

@interface MTRServiceAreaClusterAreaStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *areaID;
@property (copy, nonatomic) NSNumber *mapID;
@property (copy, nonatomic) MTRServiceAreaClusterAreaInfoStruct *areaInfo;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
