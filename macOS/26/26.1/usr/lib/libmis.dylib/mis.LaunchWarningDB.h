@interface mis.LaunchWarningDB : SQLDB

- (id)initWithDatabaseURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDatabaseURL:(id)a0 asReadOnly:(BOOL)a1;
- (void)setupPermissions;
- (BOOL)setupSchema;

@end
