@class MTRWaterHeaterManagementClusterWaterHeaterBoostInfoStruct;

@interface MTRWaterHeaterManagementClusterBoostStartedEvent : NSObject <NSCopying>

@property (copy, nonatomic) MTRWaterHeaterManagementClusterWaterHeaterBoostInfoStruct *boostInfo;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
