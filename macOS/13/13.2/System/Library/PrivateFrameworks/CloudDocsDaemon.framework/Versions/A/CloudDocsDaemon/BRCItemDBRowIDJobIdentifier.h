@class NSString;

@interface BRCItemDBRowIDJobIdentifier : NSObject <BRCJobIdentifying>

@property (readonly, nonatomic) long long itemDBRowID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)columns;
- (id)jobsDescription;
- (id)matchingJobsWhereSQLClause;
- (id)columnsValues;
- (id)initWithItemDBRowID:(long long)a0;
- (BOOL)isEqualToItemDBRowIDIdentifier:(id)a0;

@end
