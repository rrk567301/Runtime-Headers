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

- (void)warmUp;
- (void)addContact:(id)a0;
- (void)printLexiconToNSLog:(struct _LXLexicon { } *)a0;
- (void)completeRecentNamedEntities;
- (void)completeRecentContacts;
- (void)handleRecentNamedEntity:(id)a0;
- (id)loadLexicons;
- (void)resetNamedEntities;
- (void)setupContacts;
- (unsigned long long)getContactCount;
- (void)setupRecentContacts;
- (void)handleRecentContact:(id)a0;
- (int)debugEntityLoadState;
- (id)loadLexicons:(id /* block */)a0;
- (void)changeNamedEntityLoadingState:(int)a0;
- (void)completeContacts;
- (id)initWithLexiconSources:(id)a0;
- (id /* block */)addNamedEntitiesUpdateObserver:(id /* block */)a0;
- (void)removeNamedEntitiesUpdateObserver:(id /* block */)a0;
- (void)hibernate;
- (void)changeContactLoadingState:(int)a0;
- (void)removeContact:(id)a0;
- (void).cxx_destruct;
- (void)handleNamedEntity:(id)a0;
- (void)unloadLexicons;
- (void)doLoadLexicon;
- (void)handleContact:(id)a0;
- (void)_actuallyLoadLexicons;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (void)completeNamedEntities;
- (id)stateName:(int)a0;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (id)loadLexiconsUsingFilter:(id /* block */)a0;
- (void)setupNamedEntities;
- (void)setupRecentNamedEntities;
- (void)removeContactObserver:(id /* block */)a0;
- (void)_notifyNamedEntitiesUpdateObservers;
- (void)dealloc;

@end
