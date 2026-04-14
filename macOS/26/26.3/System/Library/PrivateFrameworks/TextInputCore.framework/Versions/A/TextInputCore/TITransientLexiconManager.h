@class NSString, NSXPCConnection, TISupplementalLexiconController, NSObject;
@protocol _ICLexiconManaging;

@interface TITransientLexiconManager : NSObject <TISupplementalLexiconControllerDelegate, TITransientLexiconManaging> {
    struct _LXLexicon { } *_namedEntityLexiconRef;
    struct _LXLexicon { } *_namedEntityPhraseLexiconRef;
    void *_namedEntityLexicons;
    void *_namedEntityPhraseLexicons;
    void *_addressBookLexicons;
    void *_appNameLexicons;
    NSObject<_ICLexiconManaging> *_inputContextLexiconManager;
    TISupplementalLexiconController *_supplementalLexicons;
    BOOL _lexiconsLoaded;
}

@property (retain, nonatomic, setter=_setOverridingCurrentConnectionForTesting:) NSXPCConnection *_overridingCurrentConnectionForTesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct _LXLexicon { } *namedEntityLexicon;
@property (readonly, nonatomic) struct _LXLexicon { } *namedEntityPhraseLexicon;
@property (readonly, nonatomic) TISupplementalLexiconController *ensureSupplementalLexicons;
@property (readonly, nonatomic) TISupplementalLexiconController *supplementalLexicons;
@property (nonatomic, getter=isSupplementalLexiconSearchEnabled) BOOL supplementalLexiconSearchEnabled;

+ (id)sharedInstance;
+ (void)setSharedTITransientLexiconManager:(id)a0;
+ (id)getEntries:(struct _LXLexicon { } *)a0;
+ (id)singletonInstance;

- (void)performMaintenance;
- (id)_currentConnection;
- (void)debugLogEntities;
- (void)supplementalLexiconControllerProcessDidTerminate:(id)a0;
- (id)init;
- (struct _LXLexicon { } *)filterLexicon:(struct _LXLexicon { } *)a0 againstLocale:(struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } *)a1;
- (void)registerNamedEntitiesUpdateCallback;
- (void)namedEntitiesUpdateCallback;
- (struct _LXLexicon { } *)namedEntityLexiconForLocale:(const char *)a0;
- (struct _LXLexicon { } *)filteredLexicon:(struct _LXLexicon { } *)a0 fromLexiconCache:(void *)a1 forLocale:(const char *)a2;
- (void).cxx_destruct;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (void)releaseCachedNamedEntityLexicons;
- (BOOL)searchHelper:(struct _LXLexicon { } *)a0 forWord:(struct __CFString { } *)a1 caseSensitive:(BOOL)a2;
- (void)removeContactObserver:(id /* block */)a0;
- (void)dealloc;
- (struct _LXLexicon { } *)addressBookLexiconForLocale:(const char *)a0;
- (BOOL)searchForWord:(id)a0;
- (struct _LXLexicon { } *)appNameLexiconForLocale:(const char *)a0;
- (void)getOnce:(id /* block */)a0;
- (BOOL)searchForWordCaseInsensitive:(id)a0;
- (void)loadLexicons;
- (struct _LXLexicon { } *)namedEntityPhraseLexiconForLocale:(const char *)a0;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;

@end
