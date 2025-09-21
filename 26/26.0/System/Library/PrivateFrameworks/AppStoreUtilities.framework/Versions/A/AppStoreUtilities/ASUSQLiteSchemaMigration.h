@class NSError, ASUSQLiteConnection;

@interface ASUSQLiteSchemaMigration : NSObject {
    ASUSQLiteConnection *_connection;
}

@property (readonly) NSError *error;
@property (readonly) BOOL success;

- (void)executeStatement:(id)a0;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)executeOptionalStatement:(id)a0;
- (void)executeOptionalStatement:(id)a0 bindings:(id /* block */)a1;
- (void)executeStatement:(id)a0 bindings:(id /* block */)a1;

@end
