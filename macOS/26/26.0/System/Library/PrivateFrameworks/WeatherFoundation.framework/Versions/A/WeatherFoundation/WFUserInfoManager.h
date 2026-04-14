@class NSUbiquitousKeyValueStore, NSObject;
@protocol OS_dispatch_queue, WFUserInfoManagerDelegate;

@interface WFUserInfoManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ubiquitousKVSCommunicationsQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) NSUbiquitousKeyValueStore *encryptedStore;
@property (retain, nonatomic) id<WFUserInfoManagerDelegate> delegate;

- (void)dealloc;
- (void)synchronize;
- (id)init;
- (void).cxx_destruct;
- (void)encryptedStoreChanged:(id)a0;
- (void)readUserIdentifierAndNotify;

@end
