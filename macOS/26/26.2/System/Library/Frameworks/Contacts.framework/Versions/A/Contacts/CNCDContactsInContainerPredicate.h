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

- (id)initWithIdentifier:(id)a0;
- (BOOL)canSearchCoreRecentsLibrary:(id)a0;
- (void).cxx_destruct;
- (id)contactsFromRecentsLibrary:(id)a0;
- (unsigned long long)countOfContactsFromRecentsLibrary:(id)a0;
- (id)initWithIdentifiers:(id)a0;
- (id)cn_coreDataPredicate;
- (id)containerIdentifiers;
- (id)cn_coreDataExchangePredicate;

@end
