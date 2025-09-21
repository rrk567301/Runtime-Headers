@interface IOKPowerManager : NSObject {
    unsigned int _connection;
}

+ (char)isSleepEnabled;
+ (id)powerManager;

- (void)dealloc;
- (id)init;
- (char)sleepSystemWithError:(id *)a0;

@end
