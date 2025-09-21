@class HKObject;

@interface _HDDataDeletionJournalEntry : HDJournalEntry {
    char _restrictSource;
    HKObject *_dataObject;
}

+ (char)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
