@interface WorkflowKit.WFVisualIntelligenceCameraAvailabilityResource : WFResource {
    void /* unknown type, empty encoding */ runSource;
}

+ (BOOL)mustBeAvailableForDisplay;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)init;
- (void)configureWithRunSource:(id)a0;
- (void)refreshAvailability;

@end
