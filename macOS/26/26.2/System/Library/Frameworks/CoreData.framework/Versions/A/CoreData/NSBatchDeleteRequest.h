@class NSFetchRequest;

@interface NSBatchDeleteRequest : NSPersistentStoreRequest {
    NSFetchRequest *_deleteTarget;
    long long _flags;
}

@property unsigned long long resultType;
@property (readonly, copy) NSFetchRequest *fetchRequest;

+ (id)decodeFromXPCArchive:(id)a0 withContext:(id)a1 withPolicy:(id)a2;

- (id)encodeForXPC;
- (void)_resolveEntityWithContext:(id)a0;
- (void)_setSecureOperation:(BOOL)a0;
- (id)initWithObjectIDs:(id)a0;
- (unsigned long long)requestType;
- (BOOL)shouldPerformSecureOperation;
- (id)description;
- (BOOL)_secureOperation;
- (id)initWithFetchRequest:(id)a0;
- (void)setShouldPerformSecureOperation:(BOOL)a0;
- (void)dealloc;

@end
