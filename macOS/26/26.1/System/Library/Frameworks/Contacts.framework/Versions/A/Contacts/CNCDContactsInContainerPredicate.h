@class NSString, NSArray;

@interface CNCDContactsInContainerPredicate : CNPredicate <CNCoreRecentsPredicate, CNCDContainerScopedContactPredicate> {
    NSArray *_identifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canSearchCoreRecentsLibrary:(id)a0;
- (id)cn_coreDataPredicate;
- (id)initWithIdentifiers:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)containerIdentifiers;
- (unsigned long long)countOfContactsFromRecentsLibrary:(id)a0;
- (id)contactsFromRecentsLibrary:(id)a0;
- (void).cxx_destruct;
- (id)cn_coreDataExchangePredicate;

@end
