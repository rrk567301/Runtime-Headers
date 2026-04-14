@class NSString, NSDate;

@interface CPLSyncSessionThroughputMetrics : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *metricsIdentifier;
@property (retain, nonatomic) NSDate *startTime;
@property (nonatomic) unsigned long long totalCount;

- (id)initWithIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)redactedDescription;

@end
