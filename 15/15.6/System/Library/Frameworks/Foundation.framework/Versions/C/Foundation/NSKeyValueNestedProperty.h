@class NSString, NSKeyValueUnnestedProperty;

@interface NSKeyValueNestedProperty : NSKeyValueProperty {
    NSString *_relationshipKey;
    NSString *_keyPathFromRelatedObject;
    NSKeyValueUnnestedProperty *_relationshipProperty;
    NSString *_keyPathWithoutOperatorComponents;
    char _isAllowedToResultInForwarding;
    id _dependentValueKeyOrKeys;
    char _dependentValueKeyOrKeysIsASet;
}

- (void)dealloc;
- (id)description;
- (void)_addDependentValueKey:(id)a0;
- (void)_givenPropertiesBeingInitialized:(struct __CFSet { } *)a0 getAffectingProperties:(id)a1;
- (id)_initWithContainerClass:(id)a0 keyPath:(id)a1 firstDotIndex:(unsigned long long)a2 propertiesBeingInitialized:(struct __CFSet { } *)a3;
- (Class)_isaForAutonotifying;
- (id)_keyPathIfAffectedByValueForKey:(id)a0 exactMatch:(char *)a1;
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)a0;
- (id)dependentValueKeyOrKeysIsASet:(char *)a0;
- (char)matchesWithoutOperatorComponentsKeyPath:(id)a0;
- (void)object:(id)a0 didAddObservance:(id)a1 recurse:(char)a2;
- (void)object:(id)a0 didRemoveObservance:(id)a1 recurse:(char)a2;
- (void)object:(id)a0 withObservance:(id)a1 didChangeValueForKeyOrKeys:(id)a2 recurse:(char)a3 forwardingValues:(struct { id x0; id x1; })a4;
- (char)object:(id)a0 withObservance:(id)a1 willChangeValueForKeyOrKeys:(id)a2 recurse:(char)a3 forwardingValues:(struct { id x0; id x1; } *)a4;

@end
