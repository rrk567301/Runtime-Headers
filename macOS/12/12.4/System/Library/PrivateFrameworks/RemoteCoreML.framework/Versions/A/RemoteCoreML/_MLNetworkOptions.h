@class NSMutableDictionary;

@interface _MLNetworkOptions : NSObject

@property (readonly, nonatomic) NSMutableDictionary *networkOptions;
@property (readonly, nonatomic) long long receiveTimeout;

- (void).cxx_destruct;
- (const char *)port;
- (id)initWithOptions:(id)a0;
- (const char *)localPort;
- (unsigned long long)family;
- (BOOL)useAWDL;
- (const char *)psk;
- (BOOL)useUDP;
- (BOOL)useTLS;
- (BOOL)useBonjour;
- (const char *)networkNameIdentifier;
- (const char *)localAddr;
- (long long)receiveTimeoutValue;

@end
