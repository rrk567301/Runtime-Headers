@class HDCodableObjectCollection, HDDataOriginProvenance;

@interface _HDDataBatchInsertionJournalEntry : HDJournalEntry {
    HDCodableObjectCollection *_collection;
    HDDataOriginProvenance *_provenance;
}

+ (char)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
