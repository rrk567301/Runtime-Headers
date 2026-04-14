@class NSString, NSObject;
@protocol OS_xpc_object;

@interface GEOResourceManifestUpdateAssertion : NSObject {
    NSString *_reason;
    double _creationTimestamp;
    NSObject<OS_xpc_object> *_connection;
    int _notifyToken;
}

- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)initWithReason:(id)a0;
- (void)_connectToGeod;

@end
