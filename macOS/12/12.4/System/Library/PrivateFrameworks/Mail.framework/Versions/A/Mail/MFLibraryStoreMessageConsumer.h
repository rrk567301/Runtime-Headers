@class MFLibraryStore, NSString, MCInvocationQueue;

@interface MFLibraryStoreMessageConsumer : NSObject <MFMessageConsumer>

@property (weak, nonatomic) MFLibraryStore *libraryStore;
@property (readonly, nonatomic) MCInvocationQueue *callbackQueue;
@property long long collectorID;
@property BOOL shouldCancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)newMessagesAvailable:(id)a0 secondaryMessages:(id)a1 fromUpdate:(BOOL)a2;
- (void)finishedSendingMessages;
- (void)searchPhaseComplete;
- (id)initWithLibraryStore:(id)a0;
- (void)clearLibraryStoreWeakReference;

@end
