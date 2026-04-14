@class NSUUID, NSData;

@interface _HDAssociationInsertionJournalEntry : HDJournalEntry {
    BOOL _enforceSameSource;
    NSUUID *_parentUUID;
    NSData *_childUUIDsData;
    long long _provenance;
}

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
