@class NSString;

@interface BRCItemDBRowIDJobIdentifier : NSObject <BRCJobIdentifying>

@property (readonly, nonatomic) long long itemDBRowID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)columns;
- (char)isEqualToItemDBRowIDIdentifier:(id)a0;
- (id)jobsDescription;
- (id)columnsValues;
- (id)initWithItemDBRowID:(long long)a0;
- (id)matchingJobsWhereSQLClause;

@end
