@class NSMutableDictionary;

@interface CatacombStateCache : NSObject {
    NSMutableDictionary *_cachedStates;
}

- (int)addUserStatesFromBuffer:(id)a0;
- (int)addGroupStatesFromBuffer:(id)a0;
- (void)removeUser:(unsigned int)a0;
- (unsigned int)stateOfComponent:(id)a0;
- (unsigned int)stateOfUserComponent:(unsigned int)a0;
- (id)cachedUserComponents;
- (void)reset;
- (void).cxx_destruct;
- (id)cachedGroupComponentsForUser:(unsigned int)a0;
- (unsigned int)stateOfMasterComponent;
- (id)cachedComponents;
- (id)init;

@end
