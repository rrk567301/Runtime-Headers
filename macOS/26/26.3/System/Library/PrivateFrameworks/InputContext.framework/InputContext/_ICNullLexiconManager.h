@class NSMutableArray;

@interface _ICNullLexiconManager : NSObject <_ICLexiconManaging> {
    NSMutableArray *_contactObservers;
}

- (id)loadLexicons:(id /* block */)a0;
- (void)warmUp;
- (id)init;
- (void)hibernate;
- (id)loadLexiconsUsingFilter:(id /* block */)a0;
- (void).cxx_destruct;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (void)removeNamedEntitiesUpdateObserver:(id /* block */)a0;
- (void)removeContactObserver:(id /* block */)a0;
- (id /* block */)addNamedEntitiesUpdateObserver:(id /* block */)a0;
- (void)unloadLexicons;
- (id)loadLexicons;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (id)test_loadLexicons;

@end
