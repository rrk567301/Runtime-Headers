@class NSString;

@interface _MFMessagePersistenceQueryIterator : EDPersistedMessageQueryIterator <MFMessageConsumer, MFQueryProgressMonitor>

@property (readonly) BOOL shouldCancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishedSendingMessages;
- (void)newMessagesAvailable:(id)a0 secondaryMessages:(id)a1 fromUpdate:(BOOL)a2;

@end
