@class NSXPCConnection;

@interface MCTeslaConfiguration : NSObject

@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic, getter=isFetching) char fetching;

- (void)dealloc;
- (id)init;
- (void)fetchDidFailWithError:(id)a0;
- (id)connectionError;
- (void)fetchConfigurationWithCompletionBlock:(id /* block */)a0;

@end
