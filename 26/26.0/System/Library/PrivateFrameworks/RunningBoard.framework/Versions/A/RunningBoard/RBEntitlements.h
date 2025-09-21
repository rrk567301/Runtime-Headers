@class NSString, NSSet;

@interface RBEntitlements : NSObject <RBEntitlementPossessing> {
    NSSet *_entitlements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_initWithEntitlements:(id)a0;
- (id)init;
- (BOOL)rb_hasEntitlementDomain:(unsigned long long)a0;
- (BOOL)rb_hasEntitlement:(id)a0;
- (void).cxx_destruct;

@end
