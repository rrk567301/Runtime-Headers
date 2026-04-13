@interface KHProjectJournalAttribute : KHAttribute {
    long long _journalEntryId;
}

- (id)clone;
- (BOOL)isProjectModel;
- (long long)journalEntryId;
- (void)cacheJournalEntryId:(long long)a0;
- (id)cloneInDatabase:(id)a0;
- (void)setJournalEntryId:(long long)a0;

@end
