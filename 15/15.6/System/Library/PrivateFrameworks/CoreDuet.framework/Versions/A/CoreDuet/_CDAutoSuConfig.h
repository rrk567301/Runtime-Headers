@interface _CDAutoSuConfig : NSObject

@property (nonatomic) int restrictionStartInSlot;
@property (nonatomic) int restrictionEndInSlot;
@property (nonatomic) int suStartDefaultTime;
@property (nonatomic) int suEndDefaultTimeOffsetFromSuStart;
@property (nonatomic) char alwaysFallBackToDefault;
@property (nonatomic) char alwaysReturnUnlockNow;
@property (nonatomic) char allowUnlockBeforeNow;
@property (nonatomic) double unlockThreshold;
@property (nonatomic) double startThreshold;
@property (nonatomic) double endThreshold;
@property (nonatomic) int unlockMarginInSlot;

+ (id)config;

- (int)readConfig;
- (void)setParam;
- (char)validParam;

@end
