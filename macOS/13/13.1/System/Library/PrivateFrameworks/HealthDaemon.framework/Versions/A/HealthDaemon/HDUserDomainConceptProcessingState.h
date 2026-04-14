@class HKOntologyVersion;

@interface HDUserDomainConceptProcessingState : NSObject <NSCopying>

@property (readonly, nonatomic) long long anchor;
@property (readonly, copy, nonatomic) HKOntologyVersion *ontologyVersion;
@property (readonly, nonatomic) long long maximumPropertyType;

+ (id)fetchFromKeyValueDomain:(id)a0 error:(id *)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithAnchor:(long long)a0 ontologyVersion:(id)a1 maximumPropertyType:(long long)a2;
- (id)copyByUpdatingAnchor:(long long)a0;
- (BOOL)persistInKeyValueDomain:(id)a0 error:(id *)a1;

@end
