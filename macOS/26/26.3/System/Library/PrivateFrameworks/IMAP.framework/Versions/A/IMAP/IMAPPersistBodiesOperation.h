@class NSOrderedSet;
@protocol IMAPPersistBodiesOperationDelegate;

@interface IMAPPersistBodiesOperation : IMAPPersistenceTaskOperation

@property (readonly, weak, nonatomic) id<IMAPPersistBodiesOperationDelegate> delegate;
@property (readonly, copy, nonatomic) NSOrderedSet *downloads;

- (id)description;
- (void)main;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (id)initWithDownloads:(id)a0 dataSource:(id)a1 delegate:(id)a2;

@end
