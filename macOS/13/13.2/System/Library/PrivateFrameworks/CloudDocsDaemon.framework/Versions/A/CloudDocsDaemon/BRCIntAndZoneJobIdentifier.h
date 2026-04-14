@class NSString, BRCZoneRowID;

@interface BRCIntAndZoneJobIdentifier : NSObject <BRCJobIdentifying>

@property (readonly, nonatomic) long long intID;
@property (readonly, nonatomic) BRCZoneRowID *zoneRowID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)columns;
- (id)initWithIntID:(long long)a0 zoneRowID:(id)a1;
- (id)jobsDescription;
- (id)matchingJobsWhereSQLClause;
- (id)columnsValues;
- (BOOL)isEqualToIntAndZoneJobIdentifier:(id)a0;

@end
