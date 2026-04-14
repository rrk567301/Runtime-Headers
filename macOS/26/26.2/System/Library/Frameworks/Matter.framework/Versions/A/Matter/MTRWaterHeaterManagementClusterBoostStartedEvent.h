@class MTRWaterHeaterManagementClusterWaterHeaterBoostInfoStruct;

@interface MTRWaterHeaterManagementClusterBoostStartedEvent : NSObject <NSCopying>

@property (copy, nonatomic) MTRWaterHeaterManagementClusterWaterHeaterBoostInfoStruct *boostInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
