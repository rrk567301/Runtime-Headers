@class NSXPCConnection, NSXPCInterface;

@interface SPProvenanceTracking : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)findAssociatedProvenanceEntries:(id)a0;
- (id)findProvenanceEntryForID:(id)a0;
- (id)findProvenanceEntryForURL:(id)a0;
- (id)getAllProvenanceEntries;
- (id)getProvenanceIDForURL:(id)a0;

@end
