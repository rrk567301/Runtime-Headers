@interface NSMachBootstrapServer : NSPortNameServer

+ (id)sharedInstance;

- (id)_replyPort:(id)a0;
- (id)portForName:(id)a0;
- (id)portForName:(id)a0 host:(id)a1;
- (id)portForName:(id)a0 options:(unsigned long long)a1;
- (char)registerPort:(id)a0 name:(id)a1;
- (char)removePortForName:(id)a0;
- (id)servicePortWithName:(id)a0;

@end
