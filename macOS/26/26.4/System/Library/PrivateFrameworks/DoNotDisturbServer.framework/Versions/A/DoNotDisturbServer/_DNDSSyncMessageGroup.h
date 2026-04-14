@class DNDSMutableModeAssertionStore;

@interface _DNDSSyncMessageGroup : NSObject <NSCopying>

@property (readonly) unsigned long long protocolVersion;
@property (readonly) unsigned long long serviceType;
@property (readonly, copy) DNDSMutableModeAssertionStore *store;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithServiceType:(unsigned long long)a0 protocolVersion:(unsigned long long)a1 store:(id)a2;

@end
