@class NSXPCConnection, NSXPCInterface;

@interface SPProvenanceTracking : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)findAssociatedProvenanceEntries:(id)a0;
- (id)findProvenanceEntryForID:(id)a0;
- (id)findProvenanceEntryForURL:(id)a0;
- (id)getAllProvenanceEntries;
- (id)getProvenanceIDForURL:(id)a0;

@end
