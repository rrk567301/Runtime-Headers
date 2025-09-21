@class NSDateInterval;

@interface RTStoredLocationOfInterestEnumerationOptions : NSObject <NSCopying>

@property (readonly, nonatomic) char ascendingVisitEntryDate;
@property (readonly, nonatomic) unsigned long long batchSize;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) char singleVisit;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAscendingVisitEntryDate:(char)a0 batchSize:(unsigned long long)a1 dateInterval:(id)a2 singleVisit:(char)a3;

@end
