@class PFTObservableContractTerminationContext;

@interface PFTObservableContractEnforcement : NSObject {
    unsigned long long _state;
    PFTObservableContractTerminationContext *_terminationContext;
}

+ (id)os_log;
+ (BOOL)shouldEnforceRxProtocols;
+ (BOOL)shouldSwizzleNilResults;

- (void).cxx_destruct;

@end
