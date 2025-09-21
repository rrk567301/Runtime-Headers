@class NSData;

@interface HMDIDSActivityObserverModel : HMBModel

@property (retain, nonatomic) NSData *pushToken;

+ (id)sentinelParentUUID;
+ (id)hmbProperties;

- (id)initWithModelID:(id)a0;

@end
