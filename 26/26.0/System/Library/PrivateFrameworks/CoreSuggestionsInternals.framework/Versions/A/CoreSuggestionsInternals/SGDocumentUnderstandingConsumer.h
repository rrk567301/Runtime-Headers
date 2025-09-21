@class NSString, DUDocumentHarvesting;

@interface SGDocumentUnderstandingConsumer : NSObject <HVMailConsumer, HVMessagesConsumer, HVNotesConsumer, HVRemindersConsumer> {
    DUDocumentHarvesting *_duReceiver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)consumerName;
- (id)deleteDataDerivedFromContentMatchingRequest:(id)a0;
- (id)consumeNotesContentWithContext:(id)a0;
- (id)consumeRemindersContentWithContext:(id)a0;
- (id)consumeMailContentWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)consumeMessagesContentWithContext:(id)a0;

@end
