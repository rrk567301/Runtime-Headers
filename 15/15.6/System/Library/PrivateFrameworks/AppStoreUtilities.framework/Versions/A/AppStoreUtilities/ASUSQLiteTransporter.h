@class NSString, ASUSQLiteConnection;

@interface ASUSQLiteTransporter : NSObject {
    ASUSQLiteConnection *_connection;
    NSString *_databasePath;
}

- (void).cxx_destruct;
- (id)initWithDatabasePath:(id)a0;
- (char)canBeginTransportation;
- (char)endTransportationAndRemoveDatabase;
- (void)performTransportationUsingBlock:(id /* block */)a0;

@end
