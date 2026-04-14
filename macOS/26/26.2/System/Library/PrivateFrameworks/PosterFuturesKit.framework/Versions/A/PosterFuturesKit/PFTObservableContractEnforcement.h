@class PFTObservableContractTerminationContext;

@interface PFTObservableContractEnforcement : NSObject {
    unsigned long long _state;
    PFTObservableContractTerminationContext *_terminationContext;
}

+ (BOOL)shouldSwizzleNilResults;
+ (id)os_log;
+ (BOOL)shouldEnforceRxProtocols;

- (void).cxx_destruct;

@end
