@class NSFetchRequest;

@interface NSBatchDeleteRequest : NSPersistentStoreRequest {
    NSFetchRequest *_deleteTarget;
    long long _flags;
}

@property unsigned long long resultType;
@property (readonly, copy) NSFetchRequest *fetchRequest;

+ (id)decodeFromXPCArchive:(id)a0 withContext:(id)a1 withPolicy:(id)a2;

- (void)dealloc;
- (id)description;
- (id)initWithFetchRequest:(id)a0;
- (void)_resolveEntityWithContext:(id)a0;
- (char)_secureOperation;
- (void)_setSecureOperation:(char)a0;
- (id)encodeForXPC;
- (id)initWithObjectIDs:(id)a0;
- (unsigned long long)requestType;
- (void)setShouldPerformSecureOperation:(char)a0;
- (char)shouldPerformSecureOperation;

@end
