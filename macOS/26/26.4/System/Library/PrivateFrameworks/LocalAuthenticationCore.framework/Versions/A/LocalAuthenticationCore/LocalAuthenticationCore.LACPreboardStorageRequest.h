@class NSUUID, LACClientInfo, NSDictionary;
@protocol LACXPCClient;

@interface LocalAuthenticationCore.LACPreboardStorageRequest : NSObject <LACStorageRequest> {
    void /* unknown type, empty encoding */ contextID;
    void /* function */ options;
}

@property (nonatomic, readonly) unsigned int identifier;
@property (nonatomic, readonly) long long originatorId;
@property (nonatomic, readonly) id<LACXPCClient> client;
@property (nonatomic, retain) LACClientInfo *clientInfo;
@property (nonatomic, readonly) NSUUID *contextID;
@property (nonatomic, readonly) long long domain;
@property (nonatomic, readonly) long long key;
@property (nonatomic, readonly) NSDictionary *options;

- (void).cxx_destruct;
- (id)init;

@end
