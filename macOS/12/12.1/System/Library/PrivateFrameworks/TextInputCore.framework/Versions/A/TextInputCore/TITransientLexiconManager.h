@class NSString, NSXPCConnection, NSHashTable, TISupplementalLexiconController, NSObject;
@protocol _ICLexiconManaging;

@interface TITransientLexiconManager : NSObject <TISupplementalLexiconControllerDelegate, TITransientLexiconManaging> {
    struct _LXLexicon { } *_namedEntityLexiconRef;
    struct _LXLexicon { } *_namedEntityPhraseLexiconRef;
    NSObject<_ICLexiconManaging> *_inputContextLexiconManager;
    NSHashTable *_supplementalLexicons;
    BOOL _lexiconsLoaded;
}

@property (retain, nonatomic, setter=_setOverridingCurrentConnectionForTesting:) NSXPCConnection *_overridingCurrentConnectionForTesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) const struct _LXLexicon { } *namedEntityLexicon;
@property (readonly, nonatomic) const struct _LXLexicon { } *namedEntityPhraseLexicon;
@property (readonly, nonatomic) TISupplementalLexiconController *ensureSupplementalLexicons;
@property (readonly, nonatomic) TISupplementalLexiconController *supplementalLexicons;
@property (nonatomic, getter=isSupplementalLexiconSearchEnabled) BOOL supplementalLexiconSearchEnabled;

+ (id)sharedInstance;
+ (id)singletonInstance;
+ (id)getEntries:(struct _LXLexicon { } *)a0;
+ (void)setSharedTITransientLexiconManager:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_currentConnection;
- (void)loadLexicons;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (void)removeContactObserver:(id /* block */)a0;
- (BOOL)searchForWord:(id)a0;
- (BOOL)searchForWordCaseInsensitive:(id)a0;
- (void)getOnce:(id /* block */)a0;
- (void)debugLogEntities;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (void)handleMemoryPressureLevel:(unsigned long long)a0 excessMemoryInBytes:(unsigned long long)a1;
- (void)keyboardActivityDidTransition:(id)a0;
- (void)supplementalLexiconControllerProcessDidTerminate:(id)a0;
- (BOOL)searchHelper:(struct _LXLexicon { } *)a0 forWord:(struct __CFString { } *)a1 caseSensitive:(BOOL)a2;

@end
