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
- (BOOL)useBonjour;
- (BOOL)useUDP;
- (BOOL)useTLS;
- (const char *)localAddr;
- (const char *)networkNameIdentifier;
- (long long)receiveTimeoutValue;

@end
