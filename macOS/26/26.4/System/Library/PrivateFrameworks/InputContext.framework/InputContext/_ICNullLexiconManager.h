@class NSMutableArray;

@interface _ICNullLexiconManager : NSObject <_ICLexiconManaging> {
    NSMutableArray *_contactObservers;
}

- (id /* block */)addNamedEntitiesUpdateObserver:(id /* block */)a0;
- (id)loadLexicons:(id /* block */)a0;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (void)hibernate;
- (void).cxx_destruct;
- (id)init;
- (void)warmUp;
- (void)removeNamedEntitiesUpdateObserver:(id /* block */)a0;
- (void)unloadLexicons;
- (id)loadLexicons;
- (id)loadLexiconsUsingFilter:(id /* block */)a0;
- (void)removeContactObserver:(id /* block */)a0;
- (id)test_loadLexicons;

@end
