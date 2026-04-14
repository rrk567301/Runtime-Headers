@class NSXPCInterface;

@interface CloudKit.CKSessionAcquirerXPCProxy : NSObject <CloudKit.CKXPCSessionAcquisitionClient> {
    void /* unknown type, empty encoding */ sessionAcquirer;
    void /* unknown type, empty encoding */ taskUUID;
}

@property (class, nonatomic, readonly) NSXPCInterface *CKXPCDaemonToClientSessionAcquisitionInterface;
@property (class, nonatomic, readonly) NSXPCInterface *CKXPCClientToDaemonSessionAcquisitionInterface;

- (void).cxx_destruct;
- (id)init;
- (void)noteSessionReadinessError:(id)a0;

@end
