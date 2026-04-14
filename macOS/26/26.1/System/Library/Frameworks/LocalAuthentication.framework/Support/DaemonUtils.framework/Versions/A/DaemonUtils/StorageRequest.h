@class NSUUID, NSDictionary, NSData, NSString;
@protocol LACXPCClient;

@interface StorageRequest : Request <LACStorageRequest>

@property (readonly, nonatomic) NSData *acl;
@property (readonly, nonatomic) id<LACXPCClient> client;
@property (readonly, nonatomic) NSUUID *contextID;
@property (readonly, nonatomic) long long domain;
@property (readonly, nonatomic) long long key;
@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) unsigned int identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithStorageDomain:(long long)a0 key:(long long)a1 acl:(id)a2 options:(id)a3 contextID:(id)a4 connection:(id)a5;

@end
