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

+ (void)initialize;
+ (void)updateConfig;
+ (id)sumIntegerValueForField:(id)a0 ScaledByDuration:(BOOL)a1 OnSamples:(id)a2;
+ (id)modeValueForField:(id)a0 ScaledByDuration:(BOOL)a1 OnSamples:(id)a2;
+ (id)modesValueForField:(id)a0 ScaledByDuration:(BOOL)a1 OnSamples:(id)a2;
+ (id)getValue:(id)a0 ForField:(id)a1 ScaledByDuration:(BOOL)a2;
+ (id)averageIntegerValueForField:(id)a0 ScaledByDuration:(BOOL)a1 OnSamples:(id)a2;
+ (id)medianIntegerValueForField:(id)a0 ScaledByDuration:(BOOL)a1 OnSamples:(id)a2;
+ (id)maximumIntegerValueForField:(id)a0 ScaledByDuration:(BOOL)a1 OnSamples:(id)a2;
+ (id)minimumIntegerValueForField:(id)a0 ScaledByDuration:(BOOL)a1 OnSamples:(id)a2;

- (void)addSample:(id)a0;
- (void)updateWindow;
- (id)initWithInterfaceName:(id)a0 andInterfaceCapabilities:(id)a1;
- (BOOL)configureDataTriggeredCriteria;
- (void)cleanUpStashedMedians;
- (void)setCurrentApplicationName:(id)a0 withAttributes:(id)a1;
- (BOOL)endOngoingCriteria;
- (void).cxx_destruct;
- (BOOL)checkCriteriaBSSIDWithSample:(id)a0;
- (void)addTrigger:(id)a0;
- (void)clearOngoingCriteriaDates;
- (id)evaluateCriteriaWithStopUponFirstMatch:(BOOL)a0;
- (id)initWithInterfaceName:(id)a0 andDuration:(double)a1 andInterfaceCapabilities:(id)a2;
- (id)getTriggerCriteriaList;
- (BOOL)hasChanged:(id)a0;
- (void)addSamples:(id)a0;

@end
