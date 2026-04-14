@interface SGTMailHasAttachmentSuggestion : SGTSuggestion

- (id)init;
- (id)_identifier;
- (id)_propertyListRepresentation;
- (long long)scope;
- (id)scopes;
- (id)tokenTitle;
- (id)allAttributeValues;
- (id)queryStringFragment;
- (id)displayNameForScope:(long long)a0;
- (BOOL)_shouldNotBeIncludedInRecents;
- (id)displayNameForMenu;

@end
