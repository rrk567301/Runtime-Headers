@interface SGTMailHasAttachmentSuggestion : SGTSuggestion

- (id)init;
- (id)_identifier;
- (id)_propertyListRepresentation;
- (long long)scope;
- (id)scopes;
- (id)queryStringFragment;
- (id)displayNameForScope:(long long)a0;
- (id)allAttributeValues;
- (BOOL)_shouldNotBeIncludedInRecents;
- (id)displayNameForMenu;
- (id)tokenTitle;

@end
