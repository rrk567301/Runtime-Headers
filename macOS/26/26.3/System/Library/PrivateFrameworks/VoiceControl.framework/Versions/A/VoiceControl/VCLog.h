@interface VCLog : NSObject

@property (class, nonatomic, readonly) BOOL isSensitiveLoggingEnabled;

+ (id)logForCategory:(id)a0;

- (id)init;

@end
