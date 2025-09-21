@class SFOpenCalculationCommand;

@interface SearchUIOpenCalculationHandler : SearchUICommandHandler

@property (retain) SFOpenCalculationCommand *command;

- (id)destinationApplicationBundleIdentifier;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;

@end
