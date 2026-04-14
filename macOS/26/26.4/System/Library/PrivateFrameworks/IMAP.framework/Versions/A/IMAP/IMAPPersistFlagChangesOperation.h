@class NSDictionary;
@protocol IMAPPersistFlagChangesOperationDelegate;

@interface IMAPPersistFlagChangesOperation : IMAPPersistenceTaskOperation

@property (readonly, weak, nonatomic) id<IMAPPersistFlagChangesOperationDelegate> delegate;
@property (readonly, copy, nonatomic) NSDictionary *flagChangesByServerMessage;

- (id)initWithDataSource:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDataSource:(id)a0 flagChangesByServerMessage:(id)a1 delegate:(id)a2;

@end
