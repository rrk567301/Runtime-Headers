@interface SAThreadStateKPerf : SAThreadState

@property char filledName;
@property char filledDispatchQueue;
@property char filledSwiftTask;
@property char filledUserStack;
@property char filledScheduling;
@property char filledCyclesInstructions;
@property char filledSnapshot;
@property char needsExclave;

@end
