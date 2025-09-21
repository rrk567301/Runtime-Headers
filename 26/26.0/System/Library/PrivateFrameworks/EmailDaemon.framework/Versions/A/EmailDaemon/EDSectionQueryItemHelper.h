@class EMQuery, EFLocked, EFOrderedDictionary;

@interface EDSectionQueryItemHelper : NSObject {
    EFLocked *_sectionIndexesByID;
}

@property (readonly, copy, nonatomic) id /* block */ sectionComparator;
@property (readonly, nonatomic) EFOrderedDictionary *sectionPredicates;
@property (readonly, copy, nonatomic) EMQuery *query;
@property (readonly, nonatomic) BOOL shouldSectionItemsRemainInSection;

+ (unsigned long long)_sectionIndexForItem:(id)a0 sectionPredicates:(id)a1 sectionIdentifier:(id *)a2;
+ (id)sectionQueryItemHelperWithQuery:(id)a0;

- (id)sectionIdentifierForItem:(id)a0;
- (void).cxx_destruct;
- (id /* block */)_createSectionComparator;
- (id)_idForItem:(id)a0;
- (unsigned long long)_sectionIndexForItem:(id)a0 sectionIdentifier:(id *)a1;
- (id /* block */)comparatorForItemComparator:(id /* block */)a0;
- (id)idForItem:(id)a0;
- (id)initWithQuery:(id)a0 sectionPredicates:(id)a1;
- (void)removeIDs:(id)a0;
- (id)sectionIdentifierForID:(id)a0;
- (id)sectionNumberForID:(id)a0;
- (id)sectionNumbersForIDs:(id)a0;
- (BOOL)updateSectionForItem:(id)a0;

@end
