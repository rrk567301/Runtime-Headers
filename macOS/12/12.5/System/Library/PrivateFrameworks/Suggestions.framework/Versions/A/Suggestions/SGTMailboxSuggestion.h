@interface SGTMailboxSuggestion : SGTSuggestion

+ (id)mailboxCategory;

- (id)queryStringFragment;
- (BOOL)_shouldNotBeIncludedInRecents;
- (id)initWithMailboxName:(id)a0;

@end
