@class NSSet;

@interface VUIAppDocumentModifiedFavoritesEvent : VUIAppDocumentUpdateEvent <NSCopying>

@property (copy, nonatomic) NSSet *addedEntityIDs;
@property (copy, nonatomic) NSSet *removedEntityIDs;
@property (nonatomic) BOOL isBackground;

- (id)initWithDescriptor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)coalescedEvent:(id)a0;
- (id)initWithAction:(unsigned long long)a0 entityID:(id)a1 isBackground:(BOOL)a2;
- (id)initWithAddedEntityIDs:(id)a0 removedEntityIDs:(id)a1 isBackground:(BOOL)a2;

@end
