@class NSString, NSMutableDictionary;
@protocol MFSearchableIndexQueryResultProcessorDelegate;

@interface MFSearchableIndexThreadedQueryResultProcessor : NSObject <MFMessageConsumer, MFSearchableIndexQueryResultProcessor>

@property (retain, nonatomic) NSMutableDictionary *primaryLibraryIDsByConversationID;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly) BOOL shouldCancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MFSearchableIndexQueryResultProcessorDelegate> delegate;

- (id)_target;
- (void)finishedSendingMessages;
- (void)dealloc;
- (void)cancel;
- (id)init;
- (void)newMessagesAvailable:(id)a0 secondaryMessages:(id)a1 fromUpdate:(BOOL)a2;
- (void)_messagesCompacted:(id)a0;
- (void).cxx_destruct;
- (void)_messagesAdded:(id)a0;
- (BOOL)_hasFinishedGathering;
- (id)_threadScopeCriterion;
- (void)provider:(id)a0 foundResults:(id)a1 queryIdentifier:(id)a2;

@end
