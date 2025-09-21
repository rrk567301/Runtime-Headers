@interface HDUserDomainConceptPersistableProcessingState : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long anchor;
@property (readonly, nonatomic) long long ontologyVersion;
@property (readonly, nonatomic) long long maximumPropertyType;

+ (char)fetchFromKeyValueDomain:(id)a0 stateOut:(id *)a1 error:(id *)a2;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAnchor:(long long)a0 ontologyVersion:(long long)a1 maximumPropertyType:(long long)a2;
- (char)persistInKeyValueDomain:(id)a0 error:(id *)a1;

@end
