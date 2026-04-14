@class NSString;

@interface _UTUndeclaredTypeRecord : UTTypeRecord {
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;

- (id)identifier;
- (id)declaration;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isInPublicDomain;
- (void).cxx_destruct;
- (id)_persistentIdentifierWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (BOOL)conformsToTypeIdentifier:(id)a0;
- (id)version;
- (void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext { id x0; } *)a0 unitID:(unsigned int)a1 maximumDegreeOfSeparation:(long long)a2 block:(id /* block */)a3;
- (id)awakeAfterUsingCoder:(id)a0;
- (void)_enumerateRelatedTypesWithMaximumDegreeOfSeparation:(long long)a0 block:(id /* block */)a1;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 identifier:(id)a1;

@end
