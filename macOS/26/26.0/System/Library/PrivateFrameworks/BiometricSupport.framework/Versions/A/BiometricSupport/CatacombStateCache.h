@class NSMutableDictionary;

@interface CatacombStateCache : NSObject {
    NSMutableDictionary *_cachedStates;
}

- (unsigned int)stateOfComponent:(id)a0;
- (void)reset;
- (void)removeUser:(unsigned int)a0;
- (unsigned int)stateOfUserComponent:(unsigned int)a0;
- (int)addGroupStatesFromBuffer:(id)a0;
- (id)init;
- (id)cachedGroupComponentsForUser:(unsigned int)a0;
- (int)addUserStatesFromBuffer:(id)a0;
- (id)cachedUserComponents;
- (unsigned int)stateOfMasterComponent;
- (id)cachedComponents;
- (void).cxx_destruct;

@end
