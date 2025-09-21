@class NSString, NSArray, NSDictionary, NSDate, NSMutableArray;

@interface WLKSchedule : NSObject {
    NSMutableArray *_mutableEvents;
    NSDictionary *_dictionary;
}

@property (readonly, copy, nonatomic) NSString *serviceID;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, copy, nonatomic) NSArray *events;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)prune;
- (id)eventAfterDate:(id)a0;
- (char)_isDate:(id)a0 containedByDate:(id)a1 andDate:(id)a2;
- (id)adjacentEventsForDate:(id)a0 fuzziness:(double)a1;
- (id)eventForDate:(id)a0;
- (id)eventForDate:(id)a0 fuzziness:(double)a1;

@end
