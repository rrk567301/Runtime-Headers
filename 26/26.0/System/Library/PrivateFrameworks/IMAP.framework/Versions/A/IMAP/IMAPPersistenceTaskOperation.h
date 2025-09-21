@protocol IMAPMessageDataSource;

@interface IMAPPersistenceTaskOperation : MCTaskHandlerOperation

@property (readonly, nonatomic) id<IMAPMessageDataSource> dataSource;

- (id)initWithDataSource:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
