@class NSArray;

@interface AppAttestEligibilityManager : NSObject

@property (retain, nonatomic) NSArray *allowlistedDaemons;
@property (retain, nonatomic) NSArray *allowlistedExtensions;

- (void).cxx_destruct;
- (id)fetchBundleRecordFor:(struct { unsigned int x0[8]; })a0;
- (BOOL)isEligibleApplicationExtensionFor:(struct { unsigned int x0[8]; })a0;
- (BOOL)isEligibleApplicationFor:(struct { unsigned int x0[8]; })a0;
- (BOOL)isEligibleDaemonFor:(struct { unsigned int x0[8]; })a0;

@end
