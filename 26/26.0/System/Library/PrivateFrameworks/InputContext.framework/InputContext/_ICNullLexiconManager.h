@class NSMutableArray;

@interface _ICNullLexiconManager : NSObject <_ICLexiconManaging> {
    NSMutableArray *_contactObservers;
}

- (void)warmUp;
- (id)loadLexiconsUsingFilter:(id /* block */)a0;
- (id)loadLexicons:(id /* block */)a0;
- (id /* block */)addNamedEntitiesUpdateObserver:(id /* block */)a0;
- (void)hibernate;
- (void)removeContactObserver:(id /* block */)a0;
- (id)loadLexicons;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (id)init;
- (void)unloadLexicons;
- (void)removeNamedEntitiesUpdateObserver:(id /* block */)a0;
- (void).cxx_destruct;
- (id)test_loadLexicons;

@end
