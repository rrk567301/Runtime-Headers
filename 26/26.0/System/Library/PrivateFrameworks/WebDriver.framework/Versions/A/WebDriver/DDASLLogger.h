@class NSString;

@interface DDASLLogger : DDAbstractLogger <DDLogger> {
    struct __asl_object_s { } *client;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)initialize;

- (void)logMessage:(id)a0;
- (id)init;
- (id)loggerName;

@end
