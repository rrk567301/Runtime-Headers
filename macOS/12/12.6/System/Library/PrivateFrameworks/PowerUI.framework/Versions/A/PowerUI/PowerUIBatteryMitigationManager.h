@class NSString, NSArray, NSDate, NSObject;
@protocol OS_os_log;

@interface PowerUIBatteryMitigationManager : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSString *defaultsDomain;
@property (retain, nonatomic) NSArray *lastDOD0Values;
@property (retain) NSDate *lastDOD0Update;
@property (retain, nonatomic) NSArray *lastQMaxArray;
@property (retain) NSDate *lastQMaxUpdate;
@property unsigned long long decisionSignalID;
@property (nonatomic) unsigned long long testDaysSinceQmaxUpdate;
@property (nonatomic) double timeSinceLastDOD0Update;
@property (nonatomic) double timeSinceLastQmaxUpdate;

- (void).cxx_destruct;
- (id)initWithDefaultsDomain:(id)a0;
- (id)readLastDOD0Values;
- (id)readLastDOD0Update;
- (id)readLastQMaxArray;
- (id)readLastQMaxUpdate;
- (double)additionalWaitTimeWithProperties:(id)a0;
- (id)qMaxFromBatteryProperties:(id)a0;
- (void)updateLastQMaxArray:(id)a0 atDate:(id)a1;
- (double)additionalWaitTimeForQMaxWithInterval:(double)a0;
- (id)dod0ArrayFromBatteryProperties:(id)a0;
- (void)updateLastDOD0Values:(id)a0 atDate:(id)a1;
- (double)additionalWaitTimeForDOD0WithInterval:(double)a0;
- (double)additionalWaitTime;

@end
