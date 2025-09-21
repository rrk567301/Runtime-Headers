@class NSHashTable;

@interface HDDiagnosticManager : NSObject {
    NSHashTable *_objects;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)sharedDiagnosticManager;

- (void)removeObject:(id)a0;
- (id)_diagnosticsForKeys:(id)a0 shouldLog:(BOOL)a1;
- (void)logAllDiagnostics;
- (id)diagnosticsForKeys:(id)a0;
- (id)init;
- (id)_diagnosticsOverview;
- (void)addObject:(id)a0;
- (void).cxx_destruct;

@end
