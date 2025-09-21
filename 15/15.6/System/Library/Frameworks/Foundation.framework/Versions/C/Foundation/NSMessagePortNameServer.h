@interface NSMessagePortNameServer : NSPortNameServer

+ (id)sharedInstance;

- (id)portForName:(id)a0;
- (id)portForName:(id)a0 host:(id)a1;
- (char)registerPort:(id)a0 name:(id)a1;
- (char)removePortForName:(id)a0;

@end
