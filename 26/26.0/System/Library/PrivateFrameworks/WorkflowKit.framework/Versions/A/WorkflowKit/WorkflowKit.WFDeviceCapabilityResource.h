@interface WorkflowKit.WFDeviceCapabilityResource : WFResource {
    void /* unknown type, empty encoding */ capability;
}

+ (BOOL)mustBeAvailableForDisplay;

- (id)initWithDefinition:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMobileGestaltKey:(id)a0 value:(BOOL)a1;
- (void)refreshAvailability;

@end
