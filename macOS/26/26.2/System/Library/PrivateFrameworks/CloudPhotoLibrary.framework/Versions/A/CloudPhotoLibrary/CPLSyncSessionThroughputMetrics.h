@class NSString, NSDate;

@interface CPLSyncSessionThroughputMetrics : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *metricsIdentifier;
@property (retain, nonatomic) NSDate *startTime;
@property (nonatomic) unsigned long long totalCount;

- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
