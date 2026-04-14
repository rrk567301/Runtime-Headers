@interface SGTMailHasAttachmentSuggestion : SGTSuggestion

- (id)_identifier;
- (id)_propertyListRepresentation;
- (id)scopes;
- (long long)scope;
- (id)init;
- (id)tokenTitle;
- (BOOL)_shouldNotBeIncludedInRecents;
- (id)allAttributeValues;
- (id)displayNameForMenu;
- (id)displayNameForScope:(long long)a0;
- (id)queryStringFragment;

@end
