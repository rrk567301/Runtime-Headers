@class NSIndexSet;
@protocol IMAPGetMessagesOperationDelegate;

@interface IMAPGetMessagesOperation : IMAPPersistenceTaskOperation

@property (readonly, weak, nonatomic) id<IMAPGetMessagesOperationDelegate> delegate;
@property (readonly, copy, nonatomic) NSIndexSet *uids;

- (void)main;
- (id)description;
- (void).cxx_destruct;
- (id)initWithUIDs:(id)a0 dataSource:(id)a1 delegate:(id)a2;

@end
