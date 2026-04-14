@class NSString, GEOXPCConnection;

@interface GEOResourceManifestUpdateAssertion : NSObject {
    NSString *_reason;
    double _creationTimestamp;
    GEOXPCConnection *_connection;
    int _notifyToken;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithReason:(id)a0;
- (id)debugDescription;
- (id)init;
- (void)_connectToGeod;

@end
