@class NSMapTable;

@interface JSVirtualMachine : NSObject {
    struct OpaqueJSContextGroup { } *m_group;
    struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { _Atomic unsigned char __a_value; } __a_; } value; } m_byte; } m_externalDataMutex;
    struct RetainPtr<NSMapTable> { NSMapTable *m_ptr; } m_contextCache;
    struct RetainPtr<NSMapTable> { NSMapTable *m_ptr; } m_externalObjectGraph;
    struct RetainPtr<NSMapTable> { NSMapTable *m_ptr; } m_externalRememberedSet;
}

@property (readonly) struct OpaqueJSContextGroup { } *JSContextGroupRef;

+ (void)setCrashOnVMCreation:(BOOL)a0;
+ (unsigned long long)setNumberOfDFGCompilerThreads:(unsigned long long)a0;
+ (unsigned long long)setNumberOfFTLCompilerThreads:(unsigned long long)a0;
+ (id)virtualMachineWithContextGroupRef:(struct OpaqueJSContextGroup { } *)a0;

- (void)dealloc;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addContext:(id)a0 forGlobalContextRef:(struct OpaqueJSContext { } *)a1;
- (void)addExternalRememberedObject:(id)a0;
- (void)addManagedReference:(id)a0 withOwner:(id)a1;
- (id)contextForGlobalContextRef:(struct OpaqueJSContext { } *)a0;
- (void *)externalDataMutex;
- (id)externalObjectGraph;
- (id)externalRememberedSet;
- (id)initWithContextGroupRef:(struct OpaqueJSContextGroup { } *)a0;
- (BOOL)isOldExternalObject:(id)a0;
- (BOOL)isWebThreadAware;
- (void)removeManagedReference:(id)a0 withOwner:(id)a1;
- (void)shrinkFootprintWhenIdle;

@end
