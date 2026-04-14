@interface WorkflowKit.WFDeviceCapabilityResource : WFResource {
    void /* unknown type, empty encoding */ capability;
}

+ (BOOL)mustBeAvailableForDisplay;

- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMobileGestaltKey:(id)a0 value:(BOOL)a1;
- (void)refreshAvailability;

@end
