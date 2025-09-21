@class NSDictionary;

@interface RBAllEntitlementPredicate : RBEntitlementPredicate {
    NSDictionary *_predicate;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)allEntitlements;
- (id)initWithDictionary:(id)a0 forDomain:(id)a1 attribute:(id)a2 errors:(id)a3;
- (char)matchesEntitlements:(id)a0;

@end
