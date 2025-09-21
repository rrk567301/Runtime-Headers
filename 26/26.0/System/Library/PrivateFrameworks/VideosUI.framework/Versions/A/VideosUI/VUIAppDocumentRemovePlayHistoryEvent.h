@class NSSet;

@interface VUIAppDocumentRemovePlayHistoryEvent : VUIAppDocumentUpdateEvent <NSCopying>

@property (copy, nonatomic) NSSet *removedCanonicalIDs;

- (id)initWithDescriptor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRemovedCanonicalIDs:(id)a0;

@end
