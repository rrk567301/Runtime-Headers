@class NSString, ASUSQLiteConnection;

@interface ASUSQLiteTransporter : NSObject {
    ASUSQLiteConnection *_connection;
    NSString *_databasePath;
}

- (id)initWithDatabasePath:(id)a0;
- (void).cxx_destruct;
- (BOOL)canBeginTransportation;
- (BOOL)endTransportationAndRemoveDatabase;
- (void)performTransportationUsingBlock:(id /* block */)a0;

@end
