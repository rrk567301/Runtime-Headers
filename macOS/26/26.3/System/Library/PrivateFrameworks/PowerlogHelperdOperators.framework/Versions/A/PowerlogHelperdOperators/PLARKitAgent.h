@interface PLARKitAgent : PLAgent

+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventForwardDefinitionState;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;

- (void)log;
- (void)initOperatorDependancies;

@end
