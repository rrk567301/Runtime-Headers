@class NSDate;

@interface PLSyndicationSyncWorkItem : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL shouldFindSyncDate;
@property (readonly) long long queryType;
@property (readonly, copy) NSDate *startDate;
@property (readonly, copy) NSDate *endDate;

+ (id)workItemForFindingSyncDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSyndicationQueryType:(long long)a0 startDate:(id)a1 endDate:(id)a2;

@end
