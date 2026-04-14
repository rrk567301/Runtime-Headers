@class NSMutableArray;

@interface _ICNullLexiconManager : NSObject <_ICLexiconManaging> {
    NSMutableArray *_contactObservers;
}

- (id)init;
- (void).cxx_destruct;
- (void)warmUp;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (void)hibernate;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (void)removeContactObserver:(id /* block */)a0;
- (id)loadLexicons:(id /* block */)a0;
- (id)loadLexiconsUsingFilter:(id /* block */)a0;
- (id)loadLexicons;
- (void)unloadLexicons;
- (id)test_loadLexicons;

@end
