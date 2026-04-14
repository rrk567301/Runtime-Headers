@class NSString, NSDate;

@interface MADActivitySchedulingRecord : NSObject

@property (nonatomic) unsigned long long activityID;
@property (nonatomic) NSDate *startTime;
@property (nonatomic) double duration;
@property (nonatomic) int exitStatus;
@property (retain, nonatomic) NSString *sessionLog;

- (void).cxx_destruct;
- (id)description;

@end
