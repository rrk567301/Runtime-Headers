@interface UAFRetryState : NSObject

@property (nonatomic) unsigned int retryCount;
@property (nonatomic) char pending;
@property (nonatomic) char cancelled;

@end
