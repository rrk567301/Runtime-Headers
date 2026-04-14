@class NSArray, NSMutableDictionary, NSString, NSObject;
@protocol CRKClassKitFacade, CRKCancelable;

@interface CRKConcreteClassKitRosterRequirements : NSObject <CRKClassKitRosterRequirements>

@property (readonly, nonatomic) NSObject<CRKClassKitFacade> *classKitFacade;
@property (readonly, nonatomic, getter=isForInstructor) BOOL forInstructor;
@property (retain, nonatomic) id<CRKCancelable> membershipDidChangeSubscription;
@property (retain, nonatomic) id<CRKCancelable> userDidChangeSubscription;
@property (readonly, copy, nonatomic) NSArray *dataObservers;
@property (readonly, nonatomic) NSMutableDictionary *generalObserversByToken;
@property (readonly, nonatomic) NSMutableDictionary *personObserversByToken;
@property (readonly, nonatomic) long long accountState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)studentRosterRequirementsWithClassKitFacade:(id)a0;
+ (id)instructorRosterRequirementsWithClassKitFacade:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)executeQuery:(id)a0;
- (void)currentUserWithCompletion:(id /* block */)a0;
- (void)saveClass:(id)a0 completion:(id /* block */)a1;
- (void)removeClass:(id)a0 completion:(id /* block */)a1;
- (BOOL)ownsError:(id)a0;
- (id)makeClassWithLocationID:(id)a0 name:(id)a1;
- (void)locationsWithManagePermissionsForUserWithObjectID:(id)a0 completion:(id /* block */)a1;
- (void)locationsWithObjectIDs:(id)a0 completion:(id /* block */)a1;
- (id)makeStudentQueryForSearchString:(id)a0 locationIDs:(id)a1 sortingGivenNameFirst:(BOOL)a2 pageSize:(long long)a3;
- (id)makeInstructorQueryForSearchString:(id)a0 locationIDs:(id)a1 sortingGivenNameFirst:(BOOL)a2 pageSize:(long long)a3;
- (id)makeQueryForPersonsWithIdentifiers:(id)a0;
- (id)addGeneralObserver:(id /* block */)a0;
- (id)addObserverForPersonIDs:(id)a0 observerBlock:(id /* block */)a1;
- (id)objectIDsOfPersonsInClass:(id)a0;
- (id)objectIDsOfTrustedPersonsInClass:(id)a0;
- (void)classesWithCompletion:(id /* block */)a0;
- (void)personsInClassWithObjectID:(id)a0 completion:(id /* block */)a1;
- (void)trustedPersonsInClassWithObjectID:(id)a0 completion:(id /* block */)a1;
- (void)addPerson:(id)a0 toClass:(id)a1;
- (void)removePerson:(id)a0 fromClass:(id)a1;
- (void)addTrustedPerson:(id)a0 toClass:(id)a1;
- (void)removeTrustedPerson:(id)a0 fromClass:(id)a1;
- (id)initWithClassKitFacade:(id)a0 isForInstructor:(BOOL)a1;
- (BOOL)isForStudent;
- (void)removeGeneralObserver:(id)a0;
- (void)removePersonObserver:(id)a0;
- (id)makeToken;
- (void)registerForCurrentUserChangeNotification;
- (void)registerForMembershipChangeDarwinNotification;
- (void)unregisterForMembershipChangeDarwinNotification;
- (id)makeDataObservers;
- (void)addNullableObserver:(id)a0 toArray:(id)a1;
- (id /* block */)makeDataChangedBlockWithObserverDescription:(id)a0;
- (void)registerDataObservers;
- (void)deregisterDataObservers;
- (void)startObservingAccountState;
- (void)stopObservingAccountState;
- (void)callGeneralObserversWithReason:(id)a0;

@end
