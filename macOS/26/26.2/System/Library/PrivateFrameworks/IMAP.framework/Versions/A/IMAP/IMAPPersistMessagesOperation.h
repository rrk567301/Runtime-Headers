@class NSArray;
@protocol IMAPPersistMessagesOperationDelegate;

@interface IMAPPersistMessagesOperation : IMAPPersistenceTaskOperation

@property (readonly, weak, nonatomic) id<IMAPPersistMessagesOperationDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *messages;

- (id)initWithDataSource:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDataSource:(id)a0 messages:(id)a1 delegate:(id)a2;

@end
