@class MSOID, MSMessageImprint, NSData, NSURL, NSObject;
@protocol OS_dispatch_queue, OS_xpc_session;

@interface MSTimestampRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *nonce;
@property BOOL certReq;
@property (retain) MSOID *reqPolicyID;
@property long long version;
@property (retain) MSMessageImprint *messageImprint;
@property (retain) NSObject<OS_dispatch_queue> *xpcQueue;
@property (retain) NSObject<OS_xpc_session> *xpcSession;
@property (retain) NSData *timestampRequest;
@property (retain) NSURL *timestampServer;

- (id)debugDescription;
- (id)init:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)buildMessageImprintForASN1:(struct MessageImprint { struct AlgorithmIdentifier { struct heim_oid { unsigned long long x0; unsigned int *x1; } x0; struct heim_base_data *x1; } x0; struct heim_base_data { unsigned long long x0; void *x1; } x1; } *)a0 error:(id *)a1;
- (id)buildTimestampRequest;
- (void)cleanupMessageImprint:(struct MessageImprint { struct AlgorithmIdentifier { struct heim_oid { unsigned long long x0; unsigned int *x1; } x0; struct heim_base_data *x1; } x0; struct heim_base_data { unsigned long long x0; void *x1; } x1; } *)a0;
- (id)createXPCMessageForTimestampFetch;
- (BOOL)ensureXPCSessionExists:(id *)a0;
- (void)fetchTimestampWithCompletionBlock:(id /* block */)a0 queue:(id)a1;
- (id)fetchTimestampWithError:(id *)a0;
- (void)handleXPCReply:(id)a0 onQueue:(id)a1 completion:(id /* block */)a2;
- (id)init:(id)a0 server:(id)a1;
- (BOOL)isEqualToTimestampRequest:(id)a0 error:(id *)a1;
- (id)parseMSTimestampResponseFromReply:(id)a0 error:(id *)a1;
- (void)sendTimestampFetchAnalyticsEvent:(id)a0 success:(BOOL)a1;
- (BOOL)validateTimestampRequestData:(id *)a0;

@end
