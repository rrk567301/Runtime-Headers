@class NSArray;
@protocol IMAPPersistMessagesOperationDelegate;

@interface IMAPPersistMessagesOperation : IMAPPersistenceTaskOperation

@property (readonly, weak, nonatomic) id<IMAPPersistMessagesOperationDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *messages;

- (void)main;
- (id)initWithDataSource:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 messages:(id)a1 delegate:(id)a2;

@end
