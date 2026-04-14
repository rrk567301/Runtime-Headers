@class NSMutableArray, NSArray, NSMutableDictionary, NSObject, _ICNamedEntityStore;
@protocol OS_dispatch_queue;

@interface _ICLexiconManager : NSObject <_ICLexiconManaging, _ICFeedbackAccepting> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _contactsCallbackLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _namedEntityCallbackLock;
    NSArray *_sources;
    NSMutableDictionary *_contacts;
    NSMutableArray *_contactObservers;
    NSMutableArray *_namedEntitiesUpdateObservers;
    int _contactChangeCount;
}

@property int contactLoadState;
@property int namedEntityLoadState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) _ICNamedEntityStore *namedEntityStore;

+ (unsigned long long)countWords:(id)a0;

- (unsigned long long)getContactCount;
- (void)handleRecentNamedEntity:(id)a0;
- (id /* block */)addNamedEntitiesUpdateObserver:(id /* block */)a0;
- (id)initWithLexiconSources:(id)a0;
- (void)completeNamedEntities;
- (void)removeContact:(id)a0;
- (id)loadLexicons:(id /* block */)a0;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (void)printLexiconToNSLog:(struct _LXLexicon { } *)a0;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (void)hibernate;
- (void)resetNamedEntities;
- (void)handleContact:(id)a0;
- (void)setupRecentContacts;
- (void)setupRecentNamedEntities;
- (void)changeNamedEntityLoadingState:(int)a0;
- (id)stateName:(int)a0;
- (void)handleRecentContact:(id)a0;
- (void).cxx_destruct;
- (void)completeRecentContacts;
- (void)_actuallyLoadLexicons;
- (void)handleNamedEntity:(id)a0;
- (void)warmUp;
- (void)setupContacts;
- (void)removeNamedEntitiesUpdateObserver:(id /* block */)a0;
- (void)unloadLexicons;
- (id)loadLexicons;
- (int)debugEntityLoadState;
- (void)setupNamedEntities;
- (id)loadLexiconsUsingFilter:(id /* block */)a0;
- (void)changeContactLoadingState:(int)a0;
- (void)doLoadLexicon;
- (void)_notifyNamedEntitiesUpdateObservers;
- (void)addContact:(id)a0;
- (void)completeRecentNamedEntities;
- (void)removeContactObserver:(id /* block */)a0;
- (void)dealloc;
- (void)completeContacts;

@end
