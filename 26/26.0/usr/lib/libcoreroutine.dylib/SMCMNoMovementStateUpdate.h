@class NSDate;

@interface SMCMNoMovementStateUpdate : NSObject

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long detectionType;
@property (readonly, nonatomic) NSDate *startTime;

+ (id)convertSMCMNoMovementDetectionTypeToString:(long long)a0;
+ (id)convertSMCMNoMovementStateToString:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithState:(long long)a0 detectionType:(long long)a1 startTime:(id)a2;

@end
