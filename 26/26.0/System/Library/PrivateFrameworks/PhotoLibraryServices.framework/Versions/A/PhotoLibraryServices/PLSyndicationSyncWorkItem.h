@class NSDate;

@interface PLSyndicationSyncWorkItem : NSObject <NSCopying>

@property long long queryType;
@property (copy) NSDate *startDate;
@property (copy) NSDate *endDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSyndicationQueryType:(long long)a0 startDate:(id)a1 endDate:(id)a2;

@end
