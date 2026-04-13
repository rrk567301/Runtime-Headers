@class NSArray, NSString;

@interface CNCDContactsInGroupsOrContainersWithIdentifiersPredicate : CNPredicate <CNCDContactPredicate, CNCDContainerScopedContactPredicate, CNCDUnscopedContactPredicate>

@property (readonly, nonatomic) NSArray *containerIdentifiers;
@property (readonly, nonatomic) NSArray *groupIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)cn_coreDataPredicate;
- (id)initWithContainerIdentifiers:(id)a0 groupIdentifiers:(id)a1;
- (id)cn_coreDataExchangePredicate;
- (id)cn_unscopedFetchCoreDataPredicate;

@end
