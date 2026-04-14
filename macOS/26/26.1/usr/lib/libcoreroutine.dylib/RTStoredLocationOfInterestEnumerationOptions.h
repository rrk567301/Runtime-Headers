@class NSDateInterval;

@interface RTStoredLocationOfInterestEnumerationOptions : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL ascendingVisitEntryDate;
@property (readonly, nonatomic) unsigned long long batchSize;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) BOOL singleVisit;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithAscendingVisitEntryDate:(BOOL)a0 batchSize:(unsigned long long)a1 dateInterval:(id)a2 singleVisit:(BOOL)a3;

@end
