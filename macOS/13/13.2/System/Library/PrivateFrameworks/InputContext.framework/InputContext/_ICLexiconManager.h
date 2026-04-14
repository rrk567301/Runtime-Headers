@class NSMutableArray, NSArray, NSMutableDictionary, NSObject, _ICNamedEntityStore;
@protocol OS_dispatch_queue;

@interface _ICLexiconManager : NSObject <_ICLexiconManaging, _ICFeedbackAccepting> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _contactsCallbackLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _namedEntityCallbackLock;
    NSArray *_sources;
    NSMutableDictionary *_contacts;
    NSMutableArray *_contactObservers;
    int _contactChangeCount;
}

@property int contactLoadState;
@property int namedEntityLoadState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) _ICNamedEntityStore *namedEntityStore;

+ (unsigned long long)countWords:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addContact:(id)a0;
- (void)removeContact:(id)a0;
- (void)warmUp;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (void)hibernate;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (void)removeContactObserver:(id /* block */)a0;
- (id)loadLexicons:(id /* block */)a0;
- (id)loadLexiconsUsingFilter:(id /* block */)a0;
- (id)loadLexicons;
- (void)unloadLexicons;
- (id)initWithLexiconSources:(id)a0;
- (void)doLoadLexicon;
- (id)stateName:(int)a0;
- (void)changeContactLoadingState:(int)a0;
- (void)changeNamedEntityLoadingState:(int)a0;
- (void)_actuallyLoadLexicons;
- (void)resetNamedEntities;
- (void)setupNamedEntities;
- (void)handleNamedEntity:(id)a0;
- (void)completeNamedEntities;
- (void)setupRecentNamedEntities;
- (void)handleRecentNamedEntity:(id)a0;
- (void)completeRecentNamedEntities;
- (void)setupContacts;
- (void)handleContact:(id)a0;
- (void)completeContacts;
- (void)setupRecentContacts;
- (void)handleRecentContact:(id)a0;
- (void)completeRecentContacts;
- (void)printLexiconToNSLog:(struct _LXLexicon { } *)a0;
- (unsigned long long)getContactCount;
- (int)debugEntityLoadState;

@end
