@interface DSLog : NSObject {
    struct __asl_object_s { } *asl;
    int logfd;
}

+ (id)log;
+ (id)logWithLogFilePath:(id)a0;
+ (id)logWithName:(id)a0 andLogFilePath:(id)a1;

- (void)dealloc;
- (void)logMessage:(id)a0;
- (id)init;
- (id)initWithLogFilePath:(id)a0;
- (id)initWithName:(id)a0 andLogFilePath:(id)a1;

@end
