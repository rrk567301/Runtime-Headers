@class PFTObservableContractTerminationContext;

@interface PFTObservableContractEnforcement : NSObject {
    unsigned long long _state;
    PFTObservableContractTerminationContext *_terminationContext;
}

+ (BOOL)shouldEnforceRxProtocols;
+ (id)os_log;
+ (BOOL)shouldSwizzleNilResults;

- (void).cxx_destruct;

@end
