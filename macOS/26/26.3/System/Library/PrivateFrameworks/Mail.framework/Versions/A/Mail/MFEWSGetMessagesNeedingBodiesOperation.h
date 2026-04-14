@class NSArray;
@protocol MFEWSGetMessagesNeedingBodiesOperationDelegate;

@interface MFEWSGetMessagesNeedingBodiesOperation : MFEWSPersistenceTaskOperation

@property (readonly, copy, nonatomic) NSArray *mailboxes;
@property (weak, nonatomic) id<MFEWSGetMessagesNeedingBodiesOperationDelegate> delegate;

- (id)init;
- (void)main;
- (void).cxx_destruct;
- (id)initWithMailboxes:(id)a0;

@end
