@class NSString;

@interface Network.Endpoint : Network.EndpointParent <OS_nw_endpoint> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ alternatePort;
    void /* unknown type, empty encoding */ cnames;
    void /* unknown type, empty encoding */ parentEndpoint;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ addressStorage;
    void /* unknown type, empty encoding */ alternativeEndpoints;
    void /* unknown type, empty encoding */ associations;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ dnsFailureReason;
    void /* unknown type, empty encoding */ echConfig;
    void /* unknown type, empty encoding */ edges;
    void /* unknown type, empty encoding */ ethernetAddressStorage;
    void /* unknown type, empty encoding */ registrar;
    void /* unknown type, empty encoding */ signature;
    void /* unknown type, empty encoding */ storage;
    void /* unknown type, empty encoding */ storageLock;
    void /* unknown type, empty encoding */ _publicKeys;
    void /* unknown type, empty encoding */ remoteInterfaceType;
    void /* unknown type, empty encoding */ flags;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *redactedDescription;
@property (nonatomic, readonly) long long hash;

- (void)dealloc;
- (id)copyWithZone:(void *)a0;
- (id)copy;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
