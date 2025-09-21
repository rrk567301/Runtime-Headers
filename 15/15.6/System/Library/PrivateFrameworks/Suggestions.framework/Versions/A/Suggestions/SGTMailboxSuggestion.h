@interface SGTMailboxSuggestion : SGTSuggestion

+ (id)mailboxCategory;

- (char)_shouldNotBeIncludedInRecents;
- (id)initWithMailboxName:(id)a0;
- (id)queryStringFragment;

@end
