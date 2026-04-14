@class ACDDatabase;

@interface ACDTimeMachineAccountStore : ACDAccountStore {
    ACDDatabase *_database;
}

- (id)_save;
- (void).cxx_destruct;
- (id)initWithClient:(id)a0 databaseConnection:(id)a1;
- (id)initWithTimeMachineSnapshotHomeFolderPath:(id)a0;

@end
