@class APConfigurationResponseHandler, APUnfairLock;

@interface APConfigurationStorage : NSObject

@property (retain, nonatomic) APUnfairLock *lock;
@property (retain, nonatomic) APConfigurationResponseHandler *responseHandler;

- (void).cxx_destruct;
- (id)init;
- (void)cancelConfigurationUpdate;
- (BOOL)resetConfigurationSystem;
- (BOOL)updateConfigurationSystemWithData:(id)a0;

@end
