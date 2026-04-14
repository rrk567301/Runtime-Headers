@class NSDictionary;

@interface RBAllEntitlementPredicate : RBEntitlementPredicate {
    NSDictionary *_predicate;
}

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void).cxx_destruct;
- (id)allEntitlements;
- (BOOL)matchesEntitlements:(id)a0;
- (id)initWithDictionary:(id)a0 forDomain:(id)a1 attribute:(id)a2 errors:(id)a3;

@end
