@interface _UIFocusContainerGuideImpl : _UIFocusGuideImpl

@property (copy, nonatomic) id /* block */ fallbackItemProvider;

- (BOOL)_isEligibleForFocusInteraction;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_searchForFocusRegionsInContext:(id)a0;

@end
