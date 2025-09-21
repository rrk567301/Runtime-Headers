@class NSMutableDictionary, NSMutableOrderedSet;

@interface RBProcessIndex : NSObject <NSFastEnumeration> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _capacity;
    NSMutableOrderedSet *_processes;
    NSMutableDictionary *_processByIdentity;
    NSMutableDictionary *_processByInstance;
    NSMutableDictionary *_processByIdentifier;
}

+ (id)index;
+ (id)indexWithCapacity:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)removeAllObjects;
- (char)containsIdentifier:(id)a0;
- (char)addProcess:(id)a0;
- (char)addProcess:(id)a0 existingProcess:(out id *)a1;
- (id)allProcesses;
- (char)containsIdentity:(id)a0;
- (char)containsInstance:(id)a0;
- (char)containsProcess:(id)a0;
- (id)processForIdentifier:(id)a0;
- (id)processForIdentity:(id)a0;
- (id)processForInstance:(id)a0;
- (char)removeProcess:(id)a0;

@end
