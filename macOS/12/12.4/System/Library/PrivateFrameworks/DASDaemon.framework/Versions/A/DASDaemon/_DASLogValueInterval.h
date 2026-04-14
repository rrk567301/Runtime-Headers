@class NSObject, NSDate;

@interface _DASLogValueInterval : NSObject

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSObject *value;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (double)duration;
- (id)durationString;
- (id)intervalString;

@end
