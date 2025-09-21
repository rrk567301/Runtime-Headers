@class NSData, NSUUID, NSDictionary;
@protocol LACXPCClient;

@interface LocalAuthenticationCore.LACPreboardStorageRequest : NSObject <LACStorageRequest> {
    void /* function */ acl;
    void /* unknown type, empty encoding */ contextID;
    void /* function */ options;
}

@property (nonatomic, readonly) unsigned int identifier;
@property (nonatomic, readonly) NSData *acl;
@property (nonatomic, readonly) id<LACXPCClient> client;
@property (nonatomic, readonly) NSUUID *contextID;
@property (nonatomic, readonly) long long domain;
@property (nonatomic, readonly) long long key;
@property (nonatomic, readonly) NSDictionary *options;

- (id)init;
- (void).cxx_destruct;

@end
