@class NSXPCConnection, NSXPCInterface;

@interface SPProvenanceTracking : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)findProvenanceEntryForURL:(id)a0;
- (id)findProvenanceEntryForID:(id)a0;
- (id)findAssociatedProvenanceEntries:(id)a0;
- (id)getAllProvenanceEntries;

@end
