@class NSString, GDRelationshipIdentifier;

@interface GDVisualIdentifier : NSObject <GDTripleIteratorSubentityRenderer, GDSubentity>

@property (readonly, nonatomic) GDRelationshipIdentifier *relationshipIdentifier;
@property (readonly, nonatomic) NSString *visualIdentifier;
@property (readonly, nonatomic) NSString *associationReason;
@property (readonly, nonatomic) NSString *suggestedName;
@property (readonly, nonatomic) double confidence;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRelationshipIdTriplesIterator:(id)a0;

@end
