@interface KHProjectJournalAttribute : KHAttribute {
    long long _journalEntryId;
}

- (id)clone;
- (void)cacheJournalEntryId:(long long)a0;
- (id)cloneInDatabase:(id)a0;
- (char)isProjectModel;
- (long long)journalEntryId;
- (void)setJournalEntryId:(long long)a0;

@end
