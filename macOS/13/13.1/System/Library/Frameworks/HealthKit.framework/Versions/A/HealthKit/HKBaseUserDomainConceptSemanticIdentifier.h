@class NSUUID;

@interface HKBaseUserDomainConceptSemanticIdentifier : HKUserDomainConceptSemanticIdentifier

@property (readonly, copy, nonatomic) NSUUID *UUID;

+ (id)semanticIdentifierWithComponents:(id)a0;

- (id)init;
- (id)stringValue;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0;
- (id)initWithTypeIdentifier:(id)a0;

@end
