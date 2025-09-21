@class NSNumber;

@interface MSFlagTriageAction : MSFlagChangeTriageAction

@property (nonatomic) unsigned long long cachedFlagState;
@property (retain, nonatomic) NSNumber *flagColor;

- (void).cxx_destruct;
- (char)_isFlagged;
- (void)_toggleCachedFlagState;
- (void)_toggleFlagWithBuilder:(id)a0;
- (char)flagState;

@end
