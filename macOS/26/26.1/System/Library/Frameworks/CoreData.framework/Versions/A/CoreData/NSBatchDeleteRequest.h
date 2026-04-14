@class NSFetchRequest;

@interface NSBatchDeleteRequest : NSPersistentStoreRequest {
    NSFetchRequest *_deleteTarget;
    long long _flags;
}

@property unsigned long long resultType;
@property (readonly, copy) NSFetchRequest *fetchRequest;

+ (id)decodeFromXPCArchive:(id)a0 withContext:(id)a1 withPolicy:(id)a2;

- (id)initWithFetchRequest:(id)a0;
- (BOOL)_secureOperation;
- (id)encodeForXPC;
- (void)setShouldPerformSecureOperation:(BOOL)a0;
- (void)_setSecureOperation:(BOOL)a0;
- (void)_resolveEntityWithContext:(id)a0;
- (id)initWithObjectIDs:(id)a0;
- (id)description;
- (unsigned long long)requestType;
- (void)dealloc;
- (BOOL)shouldPerformSecureOperation;

@end
