@interface MIDICIDiscoveryManager : NSObject {
    unsigned int _mClient;
}

@property (copy, nonatomic) id /* block */ responseBlock;

+ (id)sharedInstance;

- (id)handleNotification:(const struct MIDINotification { int x0; unsigned int x1; } *)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)discover;
- (void)debugPrintMessage;
- (void)discoverWithHandler:(id /* block */)a0;
- (int)setupManager;

@end
