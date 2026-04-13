@class NSData, NSArray;

@interface NPTunnelTuscanyEndpoint : NWEndpoint

@property (readonly) NSData *hostsData;
@property (readonly) NSArray *hosts;

+ (BOOL)supportsSecureCoding;
+ (unsigned int)endpointType;
+ (BOOL)supportsResolverCallback;
+ (id)encodeHosts:(id)a0;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)encodedData;
- (void)resolveEndpointWithCompletionHandler:(id /* block */)a0;
- (id)initWithEncodedData:(id)a0;
- (id)initWithHosts:(id)a0;
- (id)copyHostsWithPort:(id)a0;

@end
