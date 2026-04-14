@class NSMutableDictionary;

@interface CatacombStateCache : NSObject {
    NSMutableDictionary *_cachedStates;
}

- (id)cachedComponents;
- (int)addGroupStatesFromBuffer:(id)a0;
- (id)init;
- (unsigned int)stateOfUserComponent:(unsigned int)a0;
- (unsigned int)stateOfMasterComponent;
- (int)addUserStatesFromBuffer:(id)a0;
- (void).cxx_destruct;
- (void)removeUser:(unsigned int)a0;
- (void)reset;
- (unsigned int)stateOfComponent:(id)a0;
- (id)cachedUserComponents;
- (id)cachedGroupComponentsForUser:(unsigned int)a0;

@end
