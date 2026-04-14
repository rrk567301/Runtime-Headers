@class NSDictionary;

@interface RBAllEntitlementPredicate : RBEntitlementPredicate {
    NSDictionary *_predicate;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)count;
- (void).cxx_destruct;
- (id)allEntitlements;
- (id)initWithDictionary:(id)a0 forDomain:(id)a1 attribute:(id)a2 errors:(id)a3;
- (BOOL)matchesEntitlements:(id)a0;

@end
