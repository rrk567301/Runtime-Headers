@class MISDBManager;

@interface MISEntitlementsModel : NSObject {
    MISDBManager *_weak_db;
}

- (void).cxx_destruct;
- (void)emitEntitlementPredicates:(id)a0 predicateHandler:(id /* block */)a1;
- (id)initWithDB:(id)a0;
- (int)insertEntitlement:(id)a0 forProfile:(id)a1;

@end
