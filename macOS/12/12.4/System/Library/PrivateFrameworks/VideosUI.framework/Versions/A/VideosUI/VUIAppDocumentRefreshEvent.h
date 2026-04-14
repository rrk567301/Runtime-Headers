@interface VUIAppDocumentRefreshEvent : VUIAppDocumentUpdateEvent <NSCopying>

- (id)dictionaryRepresentation;
- (id)initWithDescriptor:(id)a0;
- (id)_refreshEventDescriptor;
- (id)initWithRefreshEventDescriptor:(id)a0;

@end
