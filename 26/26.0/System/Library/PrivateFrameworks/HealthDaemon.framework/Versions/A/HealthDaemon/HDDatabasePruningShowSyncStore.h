@class NSUUID, NSDictionary, NSDate, NSNumber;

@interface HDDatabasePruningShowSyncStore : NSObject

@property (readonly, nonatomic) long long persitentID;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSNumber *type;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *latestFrozenAnchorDate;
@property (readonly, nonatomic) NSDictionary *frozenAnchorMap;
@property (readonly, nonatomic) NSNumber *syncIdentity;
@property (readonly, nonatomic) NSNumber *isSupportedShardType;
@property (readonly, nonatomic) NSNumber *activeEpoch;
@property (readonly, nonatomic) NSNumber *pendingEpoch;
@property (readonly, nonatomic) NSNumber *tombstoneEpoch;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPersistentID:(long long)a0 identifier:(id)a1 type:(id)a2 creationDate:(id)a3;
- (id)initWithPersistentID:(long long)a0 identifier:(id)a1 type:(id)a2 creationDate:(id)a3 latestFrozenAnchorDate:(id)a4 frozenAnchorMap:(id)a5 syncIdentity:(id)a6 isSupportedShardType:(id)a7 activeEpoch:(id)a8 pendingEpoch:(id)a9 tombstoneEpoch:(id)a10;

@end
