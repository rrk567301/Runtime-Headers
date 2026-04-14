@class NSXPCConnection;

@interface MCTeslaConfiguration : NSObject

@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic, getter=isFetching) BOOL fetching;

- (void)fetchDidFailWithError:(id)a0;
- (id)connectionError;
- (id)init;
- (void)dealloc;
- (void)fetchConfigurationWithCompletionBlock:(id /* block */)a0;

@end
