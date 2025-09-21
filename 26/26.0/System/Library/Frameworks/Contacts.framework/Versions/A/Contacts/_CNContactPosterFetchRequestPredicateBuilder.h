@class NSPredicate;

@interface _CNContactPosterFetchRequestPredicateBuilder : NSObject {
    NSPredicate *_contactIdentifierClause;
    NSPredicate *_recencyTypeClause;
    NSPredicate *_deletedItemPolicyClause;
}

- (id)build;
- (void).cxx_destruct;
- (void)setContactIdentifiers:(id)a0;
- (void)setRecencyType:(long long)a0;
- (void)setDeletedItemPolicy:(long long)a0;

@end
