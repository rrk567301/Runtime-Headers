@class NSMutableDictionary;

@interface _MLNetworkOptions : NSObject

@property (readonly, nonatomic) NSMutableDictionary *networkOptions;
@property (readonly, nonatomic) long long receiveTimeout;

- (BOOL)useAWDL;
- (const char *)localPort;
- (id)initWithOptions:(id)a0;
- (const char *)port;
- (unsigned long long)family;
- (void).cxx_destruct;
- (const char *)psk;
- (const char *)localAddr;
- (const char *)networkNameIdentifier;
- (long long)receiveTimeoutValue;
- (BOOL)useBonjour;
- (BOOL)useTLS;
- (BOOL)useUDP;

@end
