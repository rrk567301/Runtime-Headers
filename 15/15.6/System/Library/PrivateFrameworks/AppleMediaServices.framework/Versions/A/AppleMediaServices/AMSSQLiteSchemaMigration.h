@class NSError, AMSSQLiteConnection;

@interface AMSSQLiteSchemaMigration : NSObject {
    AMSSQLiteConnection *_connection;
}

@property (readonly) NSError *error;
@property (readonly) char success;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (char)executeStatement:(id)a0 error:(id *)a1;
- (char)_executeStatement:(id)a0 canFailMigration:(char)a1 bindings:(id /* block */)a2 error:(id *)a3;
- (void)executeOptionalStatement:(id)a0;
- (void)executeOptionalStatement:(id)a0 bindings:(id /* block */)a1;
- (void)executeStatement:(id)a0;
- (void)executeStatement:(id)a0 bindings:(id /* block */)a1;

@end
