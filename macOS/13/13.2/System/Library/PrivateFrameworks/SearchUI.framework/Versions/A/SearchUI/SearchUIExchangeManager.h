@class NSMutableDictionary;

@interface SearchUIExchangeManager : NSObject {
    NSMutableDictionary *_exchangesByName;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)saveChanges;
- (id)exchangeList;
- (id)exchangeWithName:(id)a0;
- (id)exchangeWithName:(id)a0 createIfNotFound:(BOOL)a1;
- (BOOL)containsExchange:(id)a0;
- (void)addExchange:(id)a0;
- (void)_addExchange:(id)a0;
- (void)removeExchange:(id)a0;
- (void)_loadExchangesFromDefaults;
- (void)reloadExchangesFromDefaults;

@end
