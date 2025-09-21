@class _TtC11WorkflowKit43WFIntelligencePlatformViewAvailableResource;

@interface WorkflowKit.WFIntelligencePlatformViewAvailableResource : WFResource {
    void /* unknown type, empty encoding */ viewName;
    void /* unknown type, empty encoding */ unavailableErrorDescription;
    void /* unknown type, empty encoding */ internalErrorDescription;
}

@property (class, nonatomic, readonly) _TtC11WorkflowKit43WFIntelligencePlatformViewAvailableResource *sportsTeams;

+ (BOOL)isSingleton;
+ (BOOL)mustBeAvailableForDisplay;

- (id)initWithDefinition:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)refreshAvailability;

@end
