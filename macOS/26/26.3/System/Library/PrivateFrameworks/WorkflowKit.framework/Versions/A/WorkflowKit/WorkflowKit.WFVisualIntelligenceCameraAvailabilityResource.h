@interface WorkflowKit.WFVisualIntelligenceCameraAvailabilityResource : WFResource {
    void /* unknown type, empty encoding */ runSource;
}

+ (BOOL)mustBeAvailableForDisplay;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (void)configureWithRunSource:(id)a0;
- (void)refreshAvailability;

@end
