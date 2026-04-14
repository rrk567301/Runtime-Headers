@interface MIDICIDiscoveryManager : NSObject {
    unsigned int _mClient;
}

@property (copy, nonatomic) id /* block */ responseBlock;

+ (id)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (id)handleNotification:(const struct MIDINotification { int x0; unsigned int x1; } *)a0;
- (int)setupManager;
- (void)discoverWithHandler:(id /* block */)a0;
- (int)createClient;
- (void)debugPrintMessage;
- (void)discover;

@end
