@interface SGTMailStatusSuggestion : SGTSuggestion

@property (readonly) long long statusType;

+ (void)initialize;
+ (id)displayNameForStatusType:(long long)a0;
+ (id)mailStatusCategory;
+ (id)displayNameForMenuForStatusType:(long long)a0;
+ (id)queryStringForStatusType:(long long)a0;
+ (id)statusMatchingInput:(id)a0;
+ (id)statusImageForStatusType:(long long)a0;
+ (id)mailStatusSuggestionWithStatusType:(long long)a0;

- (id)_identifier;
- (id)_propertyListRepresentation;
- (long long)scope;
- (id)scopes;
- (id)queryStringFragment;
- (BOOL)_shouldNotBeIncludedInRecents;
- (id)displayNameForMenu;
- (id)tokenImage;
- (id)tokenTitle;
- (id)initWithStatusType:(long long)a0;

@end
