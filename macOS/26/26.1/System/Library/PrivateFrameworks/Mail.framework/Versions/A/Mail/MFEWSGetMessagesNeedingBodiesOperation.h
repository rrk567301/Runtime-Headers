@class NSArray;
@protocol MFEWSGetMessagesNeedingBodiesOperationDelegate;

@interface MFEWSGetMessagesNeedingBodiesOperation : MFEWSPersistenceTaskOperation

@property (readonly, copy, nonatomic) NSArray *mailboxes;
@property (weak, nonatomic) id<MFEWSGetMessagesNeedingBodiesOperationDelegate> delegate;

- (void)main;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMailboxes:(id)a0;

@end
