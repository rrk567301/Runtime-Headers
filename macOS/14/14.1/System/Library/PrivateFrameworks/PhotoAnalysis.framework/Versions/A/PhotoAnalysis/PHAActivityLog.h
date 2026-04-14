@class NSDate;

@interface PHAActivityLog : NSObject {
    double _absoluteStartTime;
    double _absoluteEndTime;
    unsigned long long _graphRequestInterruptionCount;
}

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) unsigned long long status;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)markProcessingStopped:(unsigned long long)a0;

@end
