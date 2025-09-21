@class HKOntologyVersion;

@interface HDUserDomainConceptProcessingState : NSObject <NSCopying>

@property (readonly, nonatomic) long long anchor;
@property (readonly, copy, nonatomic) HKOntologyVersion *ontologyVersion;
@property (readonly, nonatomic) long long maximumPropertyType;

+ (id)fetchFromKeyValueDomain:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (id)initWithAnchor:(long long)a0 ontologyVersion:(id)a1 maximumPropertyType:(long long)a2;
- (unsigned long long)hash;
- (BOOL)persistInKeyValueDomain:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyByUpdatingAnchor:(long long)a0;
- (void).cxx_destruct;

@end
