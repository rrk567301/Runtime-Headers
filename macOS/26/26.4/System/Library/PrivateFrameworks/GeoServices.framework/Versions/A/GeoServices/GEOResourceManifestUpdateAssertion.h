@class NSString, GEOXPCConnection;

@interface GEOResourceManifestUpdateAssertion : NSObject {
    NSString *_reason;
    double _creationTimestamp;
    GEOXPCConnection *_connection;
    int _notifyToken;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (id)init;
- (id)initWithReason:(id)a0;
- (void)dealloc;
- (void)_connectToGeod;

@end
