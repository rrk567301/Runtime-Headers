@class NSString, NSKeyValueContainerClass;

@interface NSKeyValueProperty : NSObject <NSCopying> {
    NSKeyValueContainerClass *_containerClass;
    NSString *_keyPath;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyPath;
- (id)_initWithContainerClass:(id)a0 keyPath:(id)a1 propertiesBeingInitialized:(struct __CFSet { } *)a2;
- (id)dependentValueKeyOrKeysIsASet:(char *)a0;
- (Class)isaForAutonotifying;
- (id)keyPathIfAffectedByValueForKey:(id)a0 exactMatch:(char *)a1;
- (id)keyPathIfAffectedByValueForMemberOfKeys:(id)a0;
- (char)matchesWithoutOperatorComponentsKeyPath:(id)a0;
- (void)object:(id)a0 didAddObservance:(id)a1 recurse:(char)a2;
- (void)object:(id)a0 didRemoveObservance:(id)a1 recurse:(char)a2;
- (void)object:(id)a0 withObservance:(id)a1 didChangeValueForKeyOrKeys:(id)a2 recurse:(char)a3 forwardingValues:(struct { id x0; id x1; })a4;
- (char)object:(id)a0 withObservance:(id)a1 willChangeValueForKeyOrKeys:(id)a2 recurse:(char)a3 forwardingValues:(struct { id x0; id x1; } *)a4;
- (id)restOfKeyPathIfContainedByValueForKeyPath:(id)a0;

@end
