@class NSString;

@interface HAP2AccessorySessionInfo : NSObject

@property (readonly, nonatomic) unsigned long long numIPAddresses;
@property (readonly, nonatomic) unsigned long long numIPAddressesTried;
@property (readonly, nonatomic) unsigned long long numBonjourNames;
@property (readonly, nonatomic) NSString *ipAddress;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) BOOL resolveAttempted;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithNumIPs:(unsigned long long)a0 numIPsTried:(unsigned long long)a1 numBonjourNames:(unsigned long long)a2 ipAddress:(id)a3 serviceName:(id)a4 resolveAttempted:(BOOL)a5;
- (void)resetWithNumIPs:(unsigned long long)a0 numIPsTried:(unsigned long long)a1 numBonjourNames:(unsigned long long)a2 ipAddress:(id)a3 serviceName:(id)a4 resolveAttempted:(BOOL)a5;

@end
