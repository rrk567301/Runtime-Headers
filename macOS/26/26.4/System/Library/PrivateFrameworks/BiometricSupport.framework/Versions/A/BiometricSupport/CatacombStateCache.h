@class NSMutableDictionary;

@interface CatacombStateCache : NSObject {
    NSMutableDictionary *_cachedStates;
}

- (id)cachedUserComponents;
- (unsigned int)stateOfUserComponent:(unsigned int)a0;
- (void)removeUser:(unsigned int)a0;
- (unsigned int)stateOfMasterComponent;
- (void).cxx_destruct;
- (id)cachedComponents;
- (void)reset;
- (id)init;
- (unsigned int)stateOfComponent:(id)a0;
- (id)cachedGroupComponentsForUser:(unsigned int)a0;
- (int)addGroupStatesFromBuffer:(id)a0;
- (int)addUserStatesFromBuffer:(id)a0;

@end
