@class NSSQLModel, NSSQLCore;

@interface NSSQLiteAdapter : NSObject {
    NSSQLCore *_sqlCore;
    NSSQLModel *_model;
    struct __CFDictionary { } *_cachedDeleteTriggersByEntity;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)sqlCore;
- (void)dealloc;
- (id)initWithSQLCore:(id)a0;

@end
