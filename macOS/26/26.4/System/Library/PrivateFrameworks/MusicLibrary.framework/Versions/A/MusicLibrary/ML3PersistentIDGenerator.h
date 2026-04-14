@class NSString, ML3DatabaseConnection;

@interface ML3PersistentIDGenerator : NSObject {
    ML3DatabaseConnection *_connection;
    NSString *_tableName;
    long long _entityType;
    long long _currentPersistentID;
    long long _nextUsedPersistentID;
    long long _maxPersistentID;
    long long _minPersistentID;
}

- (void).cxx_destruct;
- (void)_calculateNewRun;
- (long long)_entityIDFromTableName:(id)a0;
- (id)initWithDatabaseConnection:(id)a0 tableName:(id)a1;
- (long long)nextPersistentID;

@end
