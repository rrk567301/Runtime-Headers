@interface SGTMailHasAttachmentSuggestion : SGTSuggestion

- (id)init;
- (id)_identifier;
- (id)_propertyListRepresentation;
- (long long)scope;
- (id)scopes;
- (id)tokenTitle;
- (BOOL)_shouldNotBeIncludedInRecents;
- (id)allAttributeValues;
- (id)displayNameForMenu;
- (id)displayNameForScope:(long long)a0;
- (id)queryStringFragment;

@end
