@interface mis.LaunchWarningDB : SQLDB

- (id)init;
- (id)initWithDatabaseURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithDatabaseURL:(id)a0 asReadOnly:(BOOL)a1;
- (void)setupPermissions;
- (BOOL)setupSchema;

@end
