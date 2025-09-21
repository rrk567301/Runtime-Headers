@class NSDictionary;

@interface MCMEntitlementAccess : NSObject <MCMEntitlementAccess, MCMEntitlementAllows> {
    void /* function */ rawData;
    void /* unknown type, empty encoding */ classes;
}

@property (nonatomic, readonly) NSDictionary *rawData;

- (id)contributingIdentifiersForContainerConfig:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithEntitlementData:(id)a0 containerConfigMap:(id)a1;
- (BOOL)isAllowedWithContainerConfig:(id)a0 identifier:(id)a1 part:(unsigned long long)a2 partDomain:(id)a3 operation:(unsigned long long)a4 access:(unsigned long long)a5;
- (BOOL)isAllowedWithContainerConfig:(id)a0 part:(unsigned long long)a1 partDomain:(id)a2 operation:(unsigned long long)a3 access:(unsigned long long)a4;

@end
