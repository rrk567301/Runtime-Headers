@interface PersonalizationPortraitInternals.RealTimeTextConsumer : PersonalizationPortraitInternals.Consumer <HVSafariConsumer, HVMessagesConsumer, HVRemindersConsumer, HVInteractionConsumer>

- (id)consumerName;
- (id)consumeInteractionWithContext:(id)a0;
- (id)consumeRemindersContentWithContext:(id)a0;
- (id)consumeMessagesContentWithContext:(id)a0;
- (void).cxx_destruct;
- (id)deleteDataDerivedFromContentMatchingRequest:(id)a0;
- (id)consumeSafariContentWithContext:(id)a0;

@end
