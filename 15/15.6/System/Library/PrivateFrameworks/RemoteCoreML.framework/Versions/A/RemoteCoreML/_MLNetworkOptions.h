@class NSMutableDictionary;

@interface _MLNetworkOptions : NSObject

@property (readonly, nonatomic) NSMutableDictionary *networkOptions;
@property (readonly, nonatomic) long long receiveTimeout;

- (void).cxx_destruct;
- (const char *)port;
- (id)initWithOptions:(id)a0;
- (const char *)localPort;
- (unsigned long long)family;
- (char)useAWDL;
- (const char *)psk;
- (const char *)localAddr;
- (const char *)networkNameIdentifier;
- (long long)receiveTimeoutValue;
- (char)useBonjour;
- (char)useTLS;
- (char)useUDP;

@end
