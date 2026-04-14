@interface SGTMailStatusSuggestion : SGTSuggestion

@property (readonly) long long statusType;

+ (void)initialize;
+ (id)displayNameForMenuForStatusType:(long long)a0;
+ (id)displayNameForStatusType:(long long)a0;
+ (id)mailStatusCategory;
+ (id)mailStatusSuggestionWithStatusType:(long long)a0;
+ (id)queryStringForStatusType:(long long)a0;
+ (id)statusImageForStatusType:(long long)a0;
+ (id)statusMatchingInput:(id)a0;

- (id)_identifier;
- (long long)scope;
- (id)_propertyListRepresentation;
- (id)scopes;
- (id)tokenTitle;
- (BOOL)_shouldNotBeIncludedInRecents;
- (id)displayNameForMenu;
- (id)initWithStatusType:(long long)a0;
- (id)queryStringFragment;
- (id)tokenImage;

@end
