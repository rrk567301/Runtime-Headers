@class NSDictionary;

@interface RBAllEntitlementPredicate : RBEntitlementPredicate {
    NSDictionary *_predicate;
}

- (id)allEntitlements;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)description;
- (id)initWithDictionary:(id)a0 forDomain:(id)a1 attribute:(id)a2 errors:(id)a3;
- (BOOL)matchesEntitlements:(id)a0;

@end
