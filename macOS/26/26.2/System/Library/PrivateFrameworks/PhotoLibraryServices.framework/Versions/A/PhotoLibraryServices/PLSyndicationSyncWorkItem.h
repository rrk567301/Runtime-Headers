@class NSDate;

@interface PLSyndicationSyncWorkItem : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL shouldFindSyncDate;
@property (readonly) long long queryType;
@property (readonly, copy) NSDate *startDate;
@property (readonly, copy) NSDate *endDate;

+ (id)workItemForFindingSyncDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSyndicationQueryType:(long long)a0 startDate:(id)a1 endDate:(id)a2;

@end
