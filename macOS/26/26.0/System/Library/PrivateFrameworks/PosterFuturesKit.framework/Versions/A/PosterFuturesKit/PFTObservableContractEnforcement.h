@class PFTObservableContractTerminationContext;

@interface PFTObservableContractEnforcement : NSObject {
    unsigned long long _state;
    PFTObservableContractTerminationContext *_terminationContext;
}

+ (BOOL)shouldSwizzleNilResults;
+ (BOOL)shouldEnforceRxProtocols;
+ (id)os_log;

- (void).cxx_destruct;

@end
