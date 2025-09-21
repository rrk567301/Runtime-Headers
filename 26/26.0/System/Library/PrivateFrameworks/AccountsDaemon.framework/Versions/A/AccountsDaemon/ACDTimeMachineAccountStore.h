@class ACDDatabase;

@interface ACDTimeMachineAccountStore : ACDAccountStore {
    ACDDatabase *_database;
}

- (id)_save;
- (id)initWithClient:(id)a0 databaseConnection:(id)a1;
- (void).cxx_destruct;
- (id)initWithTimeMachineSnapshotHomeFolderPath:(id)a0;

@end
