@protocol IMAPMessageDataSource;

@interface IMAPPersistenceTaskOperation : MCTaskHandlerOperation

@property (readonly, nonatomic) id<IMAPMessageDataSource> dataSource;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (id)init;

@end
