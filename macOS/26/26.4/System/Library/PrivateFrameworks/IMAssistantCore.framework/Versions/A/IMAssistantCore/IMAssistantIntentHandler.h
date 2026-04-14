@class NSMutableArray;

@interface IMAssistantIntentHandler : _INExtension {
    NSMutableArray *_recentIntentHandlers;
}

- (void).cxx_destruct;
- (id)init;
- (id)handlerForIntent:(id)a0;
- (id)existingHandlerForIntentIdentifier:(id)a0;
- (void)updateRecentlyUsedHandlersWithHandler:(id)a0;

@end
