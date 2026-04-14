@class NSDate;

@interface PKSpendingSummaryFetcherRequest : NSObject <NSCopying>

@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) BOOL withLastChange;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL shouldBeNext;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;

@end
