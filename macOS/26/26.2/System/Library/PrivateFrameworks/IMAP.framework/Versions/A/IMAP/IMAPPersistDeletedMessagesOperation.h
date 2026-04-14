@class NSIndexSet;
@protocol IMAPPersistDeletedMessagesOperationDelegate;

@interface IMAPPersistDeletedMessagesOperation : IMAPPersistenceTaskOperation

@property (readonly, weak, nonatomic) id<IMAPPersistDeletedMessagesOperationDelegate> delegate;
@property (readonly, copy, nonatomic) NSIndexSet *uids;

- (id)initWithDataSource:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDataSource:(id)a0 delegate:(id)a1;
- (id)initWithDataSource:(id)a0 uids:(id)a1 delegate:(id)a2;

@end
