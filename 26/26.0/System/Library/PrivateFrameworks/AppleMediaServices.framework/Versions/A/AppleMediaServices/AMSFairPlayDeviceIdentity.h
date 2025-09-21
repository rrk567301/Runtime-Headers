@class NSURLRequest, NSDate, NSDictionary, NSURL, NSError, AMSSendableBag;
@protocol AMSFairPlayDeviceIdentityNetworkProviderProtocol;

@interface AMSFairPlayDeviceIdentity : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ cachedSessions;
    void /* unknown type, empty encoding */ persistentSessionCache;
    void /* unknown type, empty encoding */ sessionType;
}

@property (class, nonatomic, readonly) AMSFairPlayDeviceIdentity *shared;

- (id)init;
- (void)fpdiLevelFor:(NSURL *)a0 bag:(AMSSendableBag *)a1 buyParams:(NSDictionary *)a2 completionHandler:(void (^)(long long, NSError *))a3;
- (void)headersFor:(NSURLRequest *)a0 bag:(AMSSendableBag *)a1 buyParams:(NSDictionary *)a2 networkProvider:(id<AMSFairPlayDeviceIdentityNetworkProviderProtocol>)a3 completionHandler:(void (^)(NSDictionary *, NSError *))a4;
- (void)initializeSessionFor:(NSURL *)a0 buyParams:(NSDictionary *)a1 networkProvider:(id<AMSFairPlayDeviceIdentityNetworkProviderProtocol>)a2 bag:(AMSSendableBag *)a3 completionHandler:(void (^)(NSDate *, NSError *))a4;
- (void)reinitializeSessionWithLevel:(long long)a0 completionHandler:(void (^)(void))a1;
- (void)resetSessionFor:(NSURL *)a0 buyParams:(NSDictionary *)a1 bag:(AMSSendableBag *)a2 completionHandler:(void (^)(NSError *))a3;
- (void)resetSessionWithLevel:(long long)a0 completionHandler:(void (^)(void))a1;

@end
