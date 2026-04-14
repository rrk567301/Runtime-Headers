@class MTRWaterHeaterManagementClusterWaterHeaterBoostInfoStruct;

@interface MTRWaterHeaterManagementClusterBoostStartedEvent : NSObject <NSCopying>

@property (copy, nonatomic) MTRWaterHeaterManagementClusterWaterHeaterBoostInfoStruct *boostInfo;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
