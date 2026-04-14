@class NSString;

@interface RBLessThanConditionDomainRestriction : RBDomainRestriction {
    NSString *_condition;
    long long _value;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)allEntitlements;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)_initWithCondition:(id)a0 value:(long long)a1;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;

@end
