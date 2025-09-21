@interface WorkflowKit.WFTriggerInputAction : WFAction {
    void /* unknown type, empty encoding */ inputClass;
}

@property (nonatomic, readonly) BOOL isDeletable;

- (id)init;
- (id)localizedNameWithContext:(id)a0;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;

@end
