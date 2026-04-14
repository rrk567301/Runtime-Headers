@class NSDate;

@interface PKSpendingSummaryFetcherRequest : NSObject <NSCopying>

@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) BOOL withLastChange;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL shouldBeNext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
