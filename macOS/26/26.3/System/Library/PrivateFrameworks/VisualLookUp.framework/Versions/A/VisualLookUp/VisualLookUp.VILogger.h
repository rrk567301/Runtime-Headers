@class OS_os_log;

@interface VisualLookUp.VILogger : NSObject

@property (class, nonatomic, readonly) OS_os_log *log;
@property (class, nonatomic, readonly) OS_os_log *verboseLog;
@property (class, nonatomic, readonly) BOOL shouldLogConsumerMessage;
@property (class, nonatomic, readonly) BOOL shouldLogInternalMessage;
@property (class, nonatomic, readonly) BOOL shouldLogInternalVerboseMessage;

- (id)init;
- (void).cxx_destruct;

@end
