@class OS_os_log;

@interface VisualIntelligence.VILogger : NSObject

@property (class, nonatomic, readonly) OS_os_log *log;
@property (class, nonatomic, readonly) OS_os_log *verboseLog;
@property (class, nonatomic, readonly) char shouldLogConsumerMessage;
@property (class, nonatomic, readonly) char shouldLogInternalMessage;
@property (class, nonatomic, readonly) char shouldLogVerboseMessage;

- (id)init;
- (void).cxx_destruct;

@end
