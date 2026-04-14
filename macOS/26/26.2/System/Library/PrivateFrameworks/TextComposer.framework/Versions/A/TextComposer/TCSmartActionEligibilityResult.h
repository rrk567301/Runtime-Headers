@class NSMutableDictionary;

@interface TCSmartActionEligibilityResult : NSObject {
    NSMutableDictionary *actionTypeEligibilityLookup;
}

@property (readonly) BOOL isEligibleForSmartActions;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithDefaultEligibility;
- (BOOL)isAnySmartActionTaskEligible;
- (BOOL)isEligibleForActionType:(id)a0;
- (void)setEligibilityForSmartActionType:(id)a0 to:(BOOL)a1;
- (void)setEligibilityForSmartActionsTo:(BOOL)a0;

@end
