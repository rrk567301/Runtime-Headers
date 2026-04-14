@class NSMutableDictionary;

@interface CatacombStateCache : NSObject {
    NSMutableDictionary *_cachedStates;
}

- (int)addUserStatesFromBuffer:(id)a0;
- (int)addGroupStatesFromBuffer:(id)a0;
- (void)removeUser:(unsigned int)a0;
- (id)cachedUserComponents;
- (unsigned int)stateOfMasterComponent;
- (unsigned int)stateOfUserComponent:(unsigned int)a0;
- (unsigned int)stateOfComponent:(id)a0;
- (void)reset;
- (id)cachedComponents;
- (void).cxx_destruct;
- (id)cachedGroupComponentsForUser:(unsigned int)a0;
- (id)init;

@end
