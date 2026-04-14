@class RTStateModelOneState, RTStateModelEntryExit;

@interface RTMigrationHelperOneStateAndEntryExitPair : NSObject

@property (retain, nonatomic) RTStateModelOneState *oneState;
@property (retain, nonatomic) RTStateModelEntryExit *entryExit;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithOneState:(id)a0 entryExit:(id)a1;

@end
