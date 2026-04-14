@interface _UIFocusContainerGuideImpl : _UIFocusGuideImpl

@property (copy, nonatomic) id /* block */ fallbackItemProvider;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isEligibleForFocusInteraction;
- (void)_searchForFocusRegionsInContext:(id)a0;

@end
