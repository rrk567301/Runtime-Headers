@class NSArray;
@protocol MFEWSRetrievePersistedFolderDataDelegate;

@interface MFEWSRetrievePersistedFolderDataOperation : MCTaskHandlerOperation

@property (weak, nonatomic) id<MFEWSRetrievePersistedFolderDataDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *mailboxURLs;

- (void)main;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMailboxURLs:(id)a0;

@end
