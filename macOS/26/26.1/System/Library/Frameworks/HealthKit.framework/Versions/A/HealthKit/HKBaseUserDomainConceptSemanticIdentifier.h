@class NSUUID;

@interface HKBaseUserDomainConceptSemanticIdentifier : HKUserDomainConceptSemanticIdentifier

@property (readonly, copy, nonatomic) NSUUID *UUID;

+ (id)semanticIdentifierWithComponents:(id)a0;

- (id)stringValue;
- (id)initWithUUID:(id)a0;
- (void).cxx_destruct;
- (id)initWithTypeIdentifier:(id)a0;
- (id)init;

@end
