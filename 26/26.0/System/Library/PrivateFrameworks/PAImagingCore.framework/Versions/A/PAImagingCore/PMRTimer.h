@class NSString, PMRMeasurementList;

@interface PMRTimer : NSObject {
    unsigned long long _tick;
    PMRMeasurementList *_measurements;
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _timebase;
}

@property (readonly, nonatomic) NSString *name;

- (void)start;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (BOOL)markAndReset;
- (void)markComplete;
- (id)measurementListByDraining;

@end
