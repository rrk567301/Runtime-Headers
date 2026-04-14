@class NSString, GEOXPCConnection;

@interface GEOResourceManifestUpdateAssertion : NSObject {
    NSString *_reason;
    double _creationTimestamp;
    GEOXPCConnection *_connection;
    int _notifyToken;
}

- (id)debugDescription;
- (id)initWithReason:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_connectToGeod;

@end
