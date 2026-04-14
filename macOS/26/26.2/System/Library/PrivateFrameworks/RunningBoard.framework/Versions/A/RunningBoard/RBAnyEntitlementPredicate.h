@class NSArray;

@interface RBAnyEntitlementPredicate : RBEntitlementPredicate {
    NSArray *_predicate;
}

- (unsigned long long)count;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)allEntitlements;
- (id)initWithArray:(id)a0 forDomain:(id)a1 attribute:(id)a2 errors:(id)a3;
- (BOOL)matchesEntitlements:(id)a0;

@end
