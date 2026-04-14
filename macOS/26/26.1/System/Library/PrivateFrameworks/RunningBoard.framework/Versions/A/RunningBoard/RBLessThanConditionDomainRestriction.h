@class NSString;

@interface RBLessThanConditionDomainRestriction : RBDomainRestriction {
    NSString *_condition;
    long long _value;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)allEntitlements;
- (id)description;
- (id)_initWithCondition:(id)a0 value:(long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;

@end
