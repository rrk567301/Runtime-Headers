@class NSObject, NSDate;

@interface _DASLogValueInterval : NSObject

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSObject *value;

- (double)duration;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)durationString;
- (id)intervalString;

@end
