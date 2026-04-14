@interface PLARKitAgent : PLAgent

+ (void)load;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionState;

- (void)log;
- (void)initOperatorDependancies;

@end
