@class NSObject, NSDate;

@interface _DASLogValueInterval : NSObject

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSObject *value;

- (BOOL)isEqual:(id)a0;
- (double)duration;
- (void).cxx_destruct;
- (id)description;
- (id)durationString;
- (id)intervalString;

@end
