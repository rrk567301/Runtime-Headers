@interface WorkflowKit.WFDeviceCapabilityResource : WFResource {
    void /* unknown type, empty encoding */ capability;
}

+ (char)mustBeAvailableForDisplay;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)initWithMobileGestaltKey:(id)a0 value:(char)a1;
- (void)refreshAvailability;

@end
