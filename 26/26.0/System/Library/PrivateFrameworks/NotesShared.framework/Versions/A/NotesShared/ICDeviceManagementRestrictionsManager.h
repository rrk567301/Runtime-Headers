@class NSString;

@interface ICDeviceManagementRestrictionsManager : NSObject {
    void /* function */ calculatorDomainID;
}

@property (class, nonatomic, readonly) ICDeviceManagementRestrictionsManager *sharedManager;

@property (nonatomic, readonly) NSString *calculatorDomainID;
@property (nonatomic, readonly) BOOL isMathPaperSolvingAllowed;
@property (nonatomic) BOOL _isMathPaperSolvingAllowed;
@property (nonatomic, readonly) BOOL isKeyboardMathSolvingAllowed;
@property (nonatomic) BOOL _isKeyboardMathSolvingAllowed;
@property (nonatomic, readonly) BOOL isCalculatorModeScientificAllowed;
@property (nonatomic) BOOL _isCalculatorModeScientificAllowed;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)updateRestrictions;
- (void)registerObserver;
- (void)profilePreferencesDidChangeWithNotification:(id)a0;

@end
