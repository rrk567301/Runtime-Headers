@class NSString;

@interface BRCDownloadJobIdentifier : NSObject <BRCJobIdentifying>

@property (readonly, nonatomic) unsigned long long itemDBRowID;
@property (readonly, nonatomic) NSString *etag;
@property (readonly, nonatomic) int kind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)columns;
- (id)jobsDescription;
- (char)isEqualToDownloadJobIdentifier:(id)a0;
- (id)columnsValues;
- (id)initWithDBRowID:(unsigned long long)a0 etag:(id)a1 kind:(int)a2;
- (id)matchingJobsWhereSQLClause;

@end
