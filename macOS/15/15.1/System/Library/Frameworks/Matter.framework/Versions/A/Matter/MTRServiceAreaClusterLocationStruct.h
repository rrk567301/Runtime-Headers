@class NSNumber, MTRServiceAreaClusterLocationInfoStruct;

@interface MTRServiceAreaClusterLocationStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *locationID;
@property (copy, nonatomic) NSNumber *mapID;
@property (copy, nonatomic) MTRServiceAreaClusterLocationInfoStruct *locationInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
