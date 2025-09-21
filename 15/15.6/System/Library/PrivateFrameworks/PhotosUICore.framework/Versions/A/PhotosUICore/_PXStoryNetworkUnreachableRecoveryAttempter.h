@class NSArray;

@interface _PXStoryNetworkUnreachableRecoveryAttempter : _PXStoryPublicErrorRecoveryAttempter

@property (readonly, nonatomic) NSArray *recoveryOptions;

- (char)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1;

@end
