@class NSArray, NSRegularExpression;

@interface CSDetectionRule : NSObject

@property BOOL useSlidingWindow;
@property float maxSlidingLookback;
@property float initMaxSlidingLookback;
@property float windowSize;
@property float initWindowSize;
@property float slidingWindowStepSize;
@property float initSlidingWindowStepSize;
@property float mainThresholdValue;
@property (retain) NSArray *conditions;
@property (retain) NSArray *processesAllowList;
@property (retain) NSArray *processesDenyList;
@property (retain) NSRegularExpression *processesAllowRegex;
@property (retain) NSRegularExpression *processesDenyRegex;
@property BOOL daemonOnly;
@property BOOL initDaemonOnly;
@property BOOL detectAcrossBoots;
@property int ruleID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithWindowSize:(float)a0 conditions:(id)a1 processesAllowList:(id)a2 processesDenyList:(id)a3 processesAllowRegex:(id)a4 processesDenyRegex:(id)a5 daemonOnly:(BOOL)a6 mainThresholdValue:(float)a7 ruleID:(int)a8;
- (id)initWithWindowSize:(float)a0 slidingWindowStepSize:(float)a1 maxSlidingLookback:(float)a2 conditions:(id)a3 processesAllowList:(id)a4 processesDenyList:(id)a5 processesAllowRegex:(id)a6 processesDenyRegex:(id)a7 daemonOnly:(BOOL)a8 mainThresholdValue:(float)a9 ruleID:(int)a10;

@end
