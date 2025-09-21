@class NSMutableDictionary;

@interface _MLNetworkOptions : NSObject

@property (readonly, nonatomic) NSMutableDictionary *networkOptions;
@property (readonly, nonatomic) long long receiveTimeout;

- (unsigned long long)family;
- (const char *)localPort;
- (id)initWithOptions:(id)a0;
- (BOOL)useAWDL;
- (const char *)port;
- (void).cxx_destruct;
- (const char *)psk;
- (const char *)localAddr;
- (const char *)networkNameIdentifier;
- (long long)receiveTimeoutValue;
- (BOOL)useBonjour;
- (BOOL)useTLS;
- (BOOL)useUDP;

@end
