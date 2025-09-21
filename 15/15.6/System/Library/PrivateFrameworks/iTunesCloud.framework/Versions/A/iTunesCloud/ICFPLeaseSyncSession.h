@interface ICFPLeaseSyncSession : NSObject

@property (readonly, nonatomic) unsigned long long accountID;
@property (readonly, nonatomic) id leaseID;
@property (readonly, nonatomic) unsigned int mediaKind;

+ (id)leaseSyncSessionWithID:(id)a0 accountID:(unsigned long long)a1 mediaKind:(unsigned int)a2 returningLeaseSyncRequestData:(id *)a3 error:(id *)a4;

- (void).cxx_destruct;
- (char)processRenewResponseData:(id)a0 error:(id *)a1;
- (char)endLeaseSyncAndReturnError:(id *)a0;
- (char)getLeaseSyncRenewRequestData:(id *)a0 error:(id *)a1;
- (char)importLeaseSyncResponseData:(id)a0 error:(id *)a1;

@end
