@class NSString, GEOXPCConnection;

@interface GEOResourceManifestUpdateAssertion : NSObject {
    NSString *_reason;
    double _creationTimestamp;
    GEOXPCConnection *_connection;
    int _notifyToken;
}

- (id)debugDescription;
- (void)dealloc;
- (id)initWithReason:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_connectToGeod;

@end
