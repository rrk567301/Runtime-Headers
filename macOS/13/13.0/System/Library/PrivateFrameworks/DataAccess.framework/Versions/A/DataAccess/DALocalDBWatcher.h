@class NSMutableDictionary, NSMapTable, DACalDBHelper, NoteContext;

@interface DALocalDBWatcher : NSObject {
    DACalDBHelper *_calDBHelper;
    NSMutableDictionary *_calDBInfosByPath;
    NoteContext *_noteWatcher;
    NSMapTable *_concernedNotePartyToBlockMap;
}

+ (id)sharedDBWatcher;
+ (id)_canonicalizePath:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)didReceiveDarwinNotification:(id)a0;
- (void)_handleCalChangeNotification;
- (id)_dbInfoForAccountID:(id)a0 create:(BOOL)a1;
- (void)registerConcernedCalParty:(id)a0 forAccountID:(id)a1 withChangedBlock:(id /* block */)a2;
- (void)removeConcernedCalParty:(id)a0 forAccountID:(id)a1;
- (void)noteCalDBDirChanged;
- (int)lastSavedCalSequenceNumberForDatabaseInContainer:(id)a0;
- (void)setLastSavedCalSequenceNumber:(int)a0 forDatabaseInContainer:(id)a1;
- (void)_notesChangedExternally;
- (void)registerConcernedNoteParty:(id)a0 withChangedBlock:(id /* block */)a1;
- (void)removeConcernedNoteParty:(id)a0;

@end
