@class NSUUID, NSDictionary, NSString, LACClientInfo;
@protocol LACXPCClient;

@interface StorageRequest : Request <LACStorageRequest>

@property (retain, nonatomic) LACClientInfo *clientInfo;
@property (readonly, nonatomic) id<LACXPCClient> client;
@property (readonly, nonatomic) NSUUID *contextID;
@property (readonly, nonatomic) unsigned long long originatorId;
@property (readonly, nonatomic) long long domain;
@property (readonly, nonatomic) long long key;
@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) unsigned int identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithStorageDomain:(long long)a0 key:(long long)a1 options:(id)a2 contextID:(id)a3 originatorId:(unsigned long long)a4 connection:(id)a5;

@end
