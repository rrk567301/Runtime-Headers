@class NSString;

@interface RBLessThanConditionDomainRestriction : RBDomainRestriction {
    NSString *_condition;
    long long _value;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)allEntitlements;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)_initWithCondition:(id)a0 value:(long long)a1;
- (id)description;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
