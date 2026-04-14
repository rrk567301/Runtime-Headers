@interface HKListUserDomainConceptSemanticIdentifier : HKUserDomainConceptSemanticIdentifier

@property (readonly, nonatomic) unsigned long long listType;

+ (id)semanticIdentifierWithComponents:(id)a0;

- (id)stringValue;
- (id)initWithTypeIdentifier:(id)a0;
- (id)init;
- (id)initWithListType:(unsigned long long)a0;

@end
