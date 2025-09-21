@class NSString, DNDStateService, DNDModeAssertionService;

@interface DNDToggleManager : NSObject {
    DNDModeAssertionService *_modeAssertionService;
    DNDStateService *_stateService;
}

@property (copy, nonatomic) NSString *toggleAssertionIdentifier;

+ (void)initialize;
+ (id)managerForClientIdentifier:(id)a0;

- (void).cxx_destruct;
- (char)_toggleDNDOffReturningError:(id *)a0;
- (char)_toggleDNDOnReturningError:(id *)a0;
- (id)initWithModeAssertionService:(id)a0 stateService:(id)a1;
- (char)toggleToTargetState:(unsigned long long)a0 error:(id *)a1;

@end
