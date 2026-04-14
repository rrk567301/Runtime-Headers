@class NSDate;

@interface PKSpendingSummaryFetcherRequest : NSObject <NSCopying>

@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) BOOL withLastChange;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL shouldBeNext;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
