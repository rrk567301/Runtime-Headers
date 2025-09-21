@class NSNumber;

@interface HDCloudSyncCachedStoreEpochs : NSObject <NSCopying>

@property (readonly, nonatomic) NSNumber *activeEpoch;
@property (readonly, nonatomic) NSNumber *pendingEpoch;
@property (readonly, nonatomic) NSNumber *tombstoneEpoch;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithActiveEpoch:(id)a0 pendingEpoch:(id)a1 tombstoneEpoch:(id)a2;

@end
