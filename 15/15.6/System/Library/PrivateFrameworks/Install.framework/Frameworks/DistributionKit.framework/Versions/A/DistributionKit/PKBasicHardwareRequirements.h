@class NSPredicate;

@interface PKBasicHardwareRequirements : PKPredicateRequirements

@property (retain) NSPredicate *requiredHardwarePredicate;

- (void)dealloc;
- (char)areRequirementsMet;

@end
