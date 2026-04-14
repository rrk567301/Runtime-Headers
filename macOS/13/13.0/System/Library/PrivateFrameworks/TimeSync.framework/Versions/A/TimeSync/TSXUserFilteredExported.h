@class TSXUserFilteredClock, NSString;

@interface TSXUserFilteredExported : NSObject <TSXUserFilteredClockClientProtocol>

@property (weak, nonatomic) TSXUserFilteredClock *object;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateLockState:(int)a0;
- (void)updateTimeSyncTime:(unsigned long long)a0 timeSyncInterval:(unsigned long long)a1 domainTime:(unsigned long long)a2 domainInterval:(unsigned long long)a3;
- (void)resetClock;
- (void)changedClockMaster;

@end
