@class NSMutableDictionary;

@interface _MLNetworkOptions : NSObject

@property (readonly, nonatomic) NSMutableDictionary *networkOptions;
@property (readonly, nonatomic) long long receiveTimeout;

- (unsigned long long)family;
- (void).cxx_destruct;
- (BOOL)useAWDL;
- (id)initWithOptions:(id)a0;
- (const char *)localPort;
- (const char *)port;
- (const char *)psk;
- (const char *)localAddr;
- (const char *)networkNameIdentifier;
- (long long)receiveTimeoutValue;
- (BOOL)useBonjour;
- (BOOL)useTLS;
- (BOOL)useUDP;

@end
