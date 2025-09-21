@class PLPhotoLibraryPathManager;

@interface PLDirectoryJournal : NSObject <PLJournalPayloadEnumeration> {
    PLPhotoLibraryPathManager *_pathManager;
    Class _payloadClass;
}

@property (readonly, nonatomic) Class payloadClass;

- (void).cxx_destruct;
- (id)baseURLCreateIfNeeded:(char)a0;
- (char)enumeratePayloadsUsingBlock:(id /* block */)a0 error:(id *)a1;
- (id)initWithPathManager:(id)a0 payloadClass:(Class)a1;
- (char)persistManagedObject:(id)a0 error:(id *)a1;
- (char)removeAllPersistenceFilesWithError:(id *)a0;
- (char)removePersistenceForManagedObject:(id)a0 error:(id *)a1;
- (char)shouldPersistManagedObject:(id)a0;

@end
