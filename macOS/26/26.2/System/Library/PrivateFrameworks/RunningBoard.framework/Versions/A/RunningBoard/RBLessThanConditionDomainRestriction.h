@class NSString;

@interface RBLessThanConditionDomainRestriction : RBDomainRestriction {
    NSString *_condition;
    long long _value;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;
- (void).cxx_destruct;
- (id)description;
- (id)allEntitlements;
- (id)_initWithCondition:(id)a0 value:(long long)a1;
- (id)dictionaryRepresentation;

@end
