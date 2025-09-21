@class NSString, NSMutableDictionary;
@protocol MFSearchableIndexQueryResultProcessorDelegate;

@interface MFSearchableIndexThreadedQueryResultProcessor : NSObject <MFMessageConsumer, MFSearchableIndexQueryResultProcessor>

@property (retain, nonatomic) NSMutableDictionary *primaryLibraryIDsByConversationID;
@property (nonatomic, getter=isCancelled) char cancelled;
@property (readonly) char shouldCancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MFSearchableIndexQueryResultProcessorDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (id)_target;
- (void)_messagesAdded:(id)a0;
- (char)_hasFinishedGathering;
- (void)_messagesCompacted:(id)a0;
- (id)_threadScopeCriterion;
- (void)finishedSendingMessages;
- (void)newMessagesAvailable:(id)a0 secondaryMessages:(id)a1 fromUpdate:(char)a2;
- (void)provider:(id)a0 foundResults:(id)a1 queryIdentifier:(id)a2;

@end
