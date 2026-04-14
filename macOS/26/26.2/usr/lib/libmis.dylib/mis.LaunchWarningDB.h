@interface mis.LaunchWarningDB : SQLDB

- (void).cxx_destruct;
- (id)initWithDatabaseURL:(id)a0;
- (id)init;
- (id)initWithDatabaseURL:(id)a0 asReadOnly:(BOOL)a1;
- (void)setupPermissions;
- (BOOL)setupSchema;

@end
