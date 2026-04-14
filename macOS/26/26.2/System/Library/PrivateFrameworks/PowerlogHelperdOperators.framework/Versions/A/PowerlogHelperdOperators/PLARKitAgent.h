@interface PLARKitAgent : PLAgent

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitionState;

- (void)initOperatorDependancies;
- (void)log;

@end
