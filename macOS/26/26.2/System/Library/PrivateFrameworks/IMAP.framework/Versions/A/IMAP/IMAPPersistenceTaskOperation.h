@protocol IMAPMessageDataSource;

@interface IMAPPersistenceTaskOperation : MCTaskHandlerOperation

@property (readonly, nonatomic) id<IMAPMessageDataSource> dataSource;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
