@class CNContactStore, ATXStableContactRepresentationDatabase;

@interface ATXStableContactRepresentationDatastore : NSObject <ATXStableContactRepresentationProviderProtocol> {
    ATXStableContactRepresentationDatabase *_stableContactRepresentationDatabase;
    CNContactStore *_contactStore;
}

- (id)initWithStableContactRepresentationDatabase:(id)a0 contactStore:(id)a1;
- (id)stableContactRepresentationForStableContactIdentifier:(id)a0;
- (id)stableContactRepresentationForCnContactId:(id)a0 rawIdentifier:(id)a1;
- (id)cnContactIdWithStableContactIdentifier:(id)a0;
- (id)refreshCnContactIdsGivenContactEntities:(id)a0;
- (id)initWithContactStore:(id)a0;
- (void).cxx_destruct;
- (void)insertCnContactIdToStableContactIdentifierWithCnContactId:(id)a0 stableContactIdentifier:(id)a1;
- (id)stableContactIdentifierWithCnContactId:(id)a0;
- (id)cnContactForCnContactId:(id)a0 rawIdentifier:(id)a1;
- (id)updateAndGetStableContactIdentifier:(id)a0 rawIdentifier:(id)a1;
- (id)init;

@end
