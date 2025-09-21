@class HDDemoDataGeneratorWorkoutConfiguration, NSDate;

@interface HDDemoDataGeneratorState : NSObject <NSSecureCoding> {
    char _createdFromNSKeyedUnarchiver;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDate *firstSampleDate;
@property (retain, nonatomic) NSDate *lastSampleDate;
@property (retain, nonatomic) NSDate *lastRunDate;
@property (nonatomic) long long currentDay;
@property (readonly, nonatomic) NSDate *currentDate;
@property (nonatomic) double startTime;
@property (nonatomic) double currentTime;
@property (nonatomic) double endTime;
@property (nonatomic, getter=isFinished) char finished;
@property (nonatomic, getter=isFirstRun) char firstRun;
@property (readonly, nonatomic, getter=isExercising) char exercising;
@property (readonly, nonatomic, getter=isRunning) char running;
@property (readonly, nonatomic, getter=isCycling) char cycling;
@property (readonly, nonatomic, getter=isSwimming) char swimming;
@property (readonly, nonatomic, getter=isDoingHIIT) char doingHIIT;
@property (readonly, nonatomic, getter=isWalking) char walking;
@property (readonly, nonatomic, getter=isDoingElliptical) char doingElliptical;
@property (readonly, nonatomic, getter=isDoingYoga) char doingYoga;
@property (readonly, nonatomic, getter=isHiking) char hiking;
@property (readonly, nonatomic, getter=isCoreTraining) char coreTraining;
@property (readonly, nonatomic, getter=isDancing) char dancing;
@property (readonly, nonatomic, getter=isFunctionalStrengthTraining) char functionalStrengthTraining;
@property (readonly, nonatomic, getter=isCoolingDown) char coolingDown;
@property (readonly, nonatomic, getter=isUnderwaterDiving) char underwaterDiving;
@property (readonly, nonatomic, getter=isCrossCountrySkiing) char crossCountrySkiing;
@property (readonly, nonatomic, getter=isRowing) char rowing;
@property (readonly, nonatomic, getter=isSkatingSports) char skatingSports;
@property (readonly, nonatomic, getter=isPaddleSports) char paddleSports;
@property (readonly, nonatomic, getter=isGolf) char golf;
@property (readonly, nonatomic, getter=isDownhillSnowSports) char downhillSnowSports;
@property (readonly, nonatomic, getter=isSoccer) char soccer;
@property (retain, nonatomic) HDDemoDataGeneratorWorkoutConfiguration *workoutConfiguration;
@property (readonly, nonatomic) long long calendarDay;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)createdFromNSKeyedUnarchiver;

@end
