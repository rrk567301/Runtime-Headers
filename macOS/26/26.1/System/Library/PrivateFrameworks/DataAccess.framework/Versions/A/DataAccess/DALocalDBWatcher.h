@class NSMutableDictionary, NSMapTable, DACalDBHelper, NoteContext;

@interface DALocalDBWatcher : NSObject {
    DACalDBHelper *_calDBHelper;
    NSMutableDictionary *_calDBInfosByPath;
    NoteContext *_noteWatcher;
    NSMapTable *_concernedNotePartyToBlockMap;
}

+ (id)sharedDBWatcher;
+ (id)_canonicalizePath:(id)a0;

- (void)noteCalDBDirChanged;
- (void)setLastSavedCalSequenceNumber:(int)a0 forDatabaseInContainer:(id)a1;
- (id)_dbInfoForAccountID:(id)a0 create:(BOOL)a1;
- (void)registerConcernedNoteParty:(id)a0 withChangedBlock:(id /* block */)a1;
- (void)removeConcernedNoteParty:(id)a0;
- (void)registerConcernedCalParty:(id)a0 forAccountID:(id)a1 withChangedBlock:(id /* block */)a2;
- (void)_notesChangedExternally;
- (void)_handleCalChangeNotification;
- (void)didReceiveDarwinNotification:(id)a0;
- (void).cxx_destruct;
- (void)removeConcernedCalParty:(id)a0 forAccountID:(id)a1;
- (int)lastSavedCalSequenceNumberForDatabaseInContainer:(id)a0;
- (id)init;

@end
