@interface WorkflowKit.WFFeatureFlagResource : WFResource {
    void /* unknown type, empty encoding */ domain;
    void /* unknown type, empty encoding */ feature;
    void /* unknown type, empty encoding */ value;
}

+ (BOOL)mustBeAvailableForDisplay;

- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 feature:(id)a1 value:(BOOL)a2;
- (id)init;
- (void)refreshAvailability;

@end
