@interface _MLNetworkUtilities : NSObject

+ (void)bindEndPoints:(id)a0 localAddr:(const char *)a1 localPort:(const char *)a2;
+ (id /* block */)configureTLS:(id)a0;
+ (id)createSecureConnectionParameter:(id /* block */)a0 useUDP:(char)a1;
+ (id)doInitNetwork:(id)a0;
+ (void)setAWDL:(id)a0 useAWDL:(char)a1;
+ (id)setProtocolStack:(id)a0 family:(unsigned long long)a1;
+ (void)setupBonjour:(id)a0 name:(const char *)a1 useBonjour:(char)a2 useUDP:(char)a3;
+ (void)setupListenerStateChangeHandler:(id)a0 useUDP:(char)a1;

@end
