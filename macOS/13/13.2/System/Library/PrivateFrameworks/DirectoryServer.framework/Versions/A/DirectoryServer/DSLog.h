@interface DSLog : NSObject {
    struct __asl_object_s { } *asl;
    int logfd;
}

+ (id)log;
+ (id)logWithName:(id)a0 andLogFilePath:(id)a1;
+ (id)logWithLogFilePath:(id)a0;

- (void)dealloc;
- (id)init;
- (void)logMessage:(id)a0;
- (id)initWithLogFilePath:(id)a0;
- (id)initWithName:(id)a0 andLogFilePath:(id)a1;

@end
