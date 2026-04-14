@interface _UIFocusContainerGuideImpl : _UIFocusGuideImpl

@property (copy, nonatomic) id /* block */ fallbackItemProvider;

- (id)initWithDelegate:(id)a0;
- (BOOL)_isEligibleForFocusInteraction;
- (void).cxx_destruct;
- (void)_searchForFocusRegionsInContext:(id)a0;

@end
