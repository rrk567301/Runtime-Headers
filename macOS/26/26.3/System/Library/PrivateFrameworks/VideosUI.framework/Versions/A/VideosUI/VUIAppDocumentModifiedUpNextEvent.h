@class NSSet;

@interface VUIAppDocumentModifiedUpNextEvent : VUIAppDocumentUpdateEvent <NSCopying>

@property (copy, nonatomic) NSSet *addedCanonicalIDs;
@property (copy, nonatomic) NSSet *removedCanonicalIDs;

- (id)initWithDescriptor:(id)a0;
- (id)dictionaryRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)coalescedEvent:(id)a0;
- (id)initWithAction:(unsigned long long)a0 canonicalID:(id)a1;
- (id)initWithAddedCanonicalIDs:(id)a0 removedCanonicalIDs:(id)a1;

@end
