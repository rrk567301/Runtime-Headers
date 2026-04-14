@class NSSet;

@interface VUIAppDocumentRemovePlayHistoryEvent : VUIAppDocumentUpdateEvent <NSCopying>

@property (copy, nonatomic) NSSet *removedCanonicalIDs;

- (id)initWithDescriptor:(id)a0;
- (id)dictionaryRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithRemovedCanonicalIDs:(id)a0;

@end
