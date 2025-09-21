@class MTRWaterHeaterManagementClusterWaterHeaterBoostInfoStruct;

@interface MTRWaterHeaterManagementClusterBoostStartedEvent : NSObject <NSCopying>

@property (copy, nonatomic) MTRWaterHeaterManagementClusterWaterHeaterBoostInfoStruct *boostInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
