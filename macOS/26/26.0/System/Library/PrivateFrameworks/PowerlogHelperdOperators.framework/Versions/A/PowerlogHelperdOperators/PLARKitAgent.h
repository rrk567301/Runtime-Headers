@interface PLARKitAgent : PLAgent

+ (void)load;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventForwardDefinitionState;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;

- (void)initOperatorDependancies;
- (void)log;

@end
