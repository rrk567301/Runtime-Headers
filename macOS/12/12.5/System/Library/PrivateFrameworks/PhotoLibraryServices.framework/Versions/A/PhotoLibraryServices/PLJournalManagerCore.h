@class NSURL;

@interface PLJournalManagerCore : NSObject {
    NSURL *_baseURL;
    NSURL *_historyTokenURL;
}

+ (id)payloadClasses;
+ (id)_objectEnumeratorForJournal:(id)a0 usingManagedObjectContext:(id)a1 error:(id *)a2;
+ (id)_nextValidPayloadWithObjectEnumerator:(id)a0 changedKeys:(id)a1;
+ (void)validatePayloadClassesForManagedObjectModel:(id)a0;
+ (BOOL)createSnapshotWithJournal:(id)a0 usingManagedObjectContext:(id)a1 error:(id *)a2;
+ (BOOL)appendSnapshotWithJournal:(id)a0 usingManagedObjectContext:(id)a1 changedKeys:(id)a2 error:(id *)a3;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBaseURL:(id)a0;
- (BOOL)saveHistoryToken:(id)a0 error:(id *)a1;
- (void)removeHistoryToken;

@end
