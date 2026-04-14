@class NSNumber;

@interface CHIPIasWdClusterStartWarningParams : NSObject

@property (retain, nonatomic) NSNumber *warningInfo;
@property (retain, nonatomic) NSNumber *warningDuration;
@property (retain, nonatomic) NSNumber *strobeDutyCycle;
@property (retain, nonatomic) NSNumber *strobeLevel;

- (id)init;
- (void).cxx_destruct;

@end
