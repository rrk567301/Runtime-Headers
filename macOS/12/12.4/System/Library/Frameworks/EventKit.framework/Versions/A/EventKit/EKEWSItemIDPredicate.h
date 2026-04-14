@class NSString;

@interface EKEWSItemIDPredicate : EKGeneralLookupPredicate {
    NSString *_itemID;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)predicateFormat;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)initWithItemID:(id)a0;
- (id)predicateForCoreData;

@end
