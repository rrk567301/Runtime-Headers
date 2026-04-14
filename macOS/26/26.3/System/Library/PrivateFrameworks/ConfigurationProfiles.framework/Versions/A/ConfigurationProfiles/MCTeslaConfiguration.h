@class NSXPCConnection;

@interface MCTeslaConfiguration : NSObject

@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic, getter=isFetching) BOOL fetching;

- (id)init;
- (void)dealloc;
- (id)connectionError;
- (void)fetchDidFailWithError:(id)a0;
- (void)fetchConfigurationWithCompletionBlock:(id /* block */)a0;

@end
