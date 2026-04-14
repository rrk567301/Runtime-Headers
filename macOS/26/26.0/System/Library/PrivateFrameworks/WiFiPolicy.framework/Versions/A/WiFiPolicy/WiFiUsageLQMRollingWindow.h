@class NSString, WiFiUsageInterfaceCapabilities, NSMutableSet, NSDate, NSMutableArray;

@interface WiFiUsageLQMRollingWindow : NSObject

@property (copy, nonatomic) NSDate *createdTimestamp;
@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSMutableArray *samples;
@property (retain, nonatomic) NSMutableArray *triggerCriteriaFilterList;
@property (retain, nonatomic) NSMutableSet *features;
@property (retain, nonatomic) NSString *lastSampleBssid;
@property (retain, nonatomic) NSString *fgApp;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) WiFiUsageInterfaceCapabilities *capabilities;
@property (readonly, nonatomic) NSMutableArray *preceedingTriggers;

+ (id)minimumIntegerValueForField:(id)a0 ScaledByDuration:(BOOL)a1 OnSamples:(id)a2;
+ (id)getValue:(id)a0 ForField:(id)a1 ScaledByDuration:(BOOL)a2;
+ (void)updateConfig;
+ (id)medianIntegerValueForField:(id)a0 ScaledByDuration:(BOOL)a1 OnSamples:(id)a2;
+ (void)initialize;
+ (id)averageIntegerValueForField:(id)a0 ScaledByDuration:(BOOL)a1 OnSamples:(id)a2;
+ (id)modesValueForField:(id)a0 ScaledByDuration:(BOOL)a1 OnSamples:(id)a2;
+ (id)modeValueForField:(id)a0 ScaledByDuration:(BOOL)a1 OnSamples:(id)a2;
+ (id)sumIntegerValueForField:(id)a0 ScaledByDuration:(BOOL)a1 OnSamples:(id)a2;
+ (id)maximumIntegerValueForField:(id)a0 ScaledByDuration:(BOOL)a1 OnSamples:(id)a2;

- (id)initWithInterfaceName:(id)a0 andInterfaceCapabilities:(id)a1;
- (id)evaluateCriteriaWithStopUponFirstMatch:(BOOL)a0;
- (BOOL)configureDataTriggeredCriteria;
- (id)initWithInterfaceName:(id)a0 andDuration:(double)a1 andInterfaceCapabilities:(id)a2;
- (void)addSample:(id)a0;
- (BOOL)endOngoingCriteria;
- (void)clearOngoingCriteriaDates;
- (void)cleanUpStashedMedians;
- (void)updateWindow;
- (BOOL)checkCriteriaBSSIDWithSample:(id)a0;
- (void)addTrigger:(id)a0;
- (BOOL)hasChanged:(id)a0;
- (id)getTriggerCriteriaList;
- (void)addSamples:(id)a0;
- (void)setCurrentApplicationName:(id)a0 withAttributes:(id)a1;
- (void).cxx_destruct;

@end
