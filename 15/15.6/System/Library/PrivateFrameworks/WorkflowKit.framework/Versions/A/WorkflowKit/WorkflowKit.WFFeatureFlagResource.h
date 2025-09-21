@interface WorkflowKit.WFFeatureFlagResource : WFResource {
    void /* unknown type, empty encoding */ domain;
    void /* unknown type, empty encoding */ feature;
    void /* unknown type, empty encoding */ value;
}

+ (char)mustBeAvailableForDisplay;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)initWithDomain:(id)a0 feature:(id)a1 value:(char)a2;
- (void)refreshAvailability;

@end
