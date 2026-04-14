@interface PLARKitAgent : PLAgent

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionState;
+ (id)entryEventNoneDefinitions;

- (void)initOperatorDependancies;
- (void)log;

@end
