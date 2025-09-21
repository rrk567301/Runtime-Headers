@class TUHandle, IDSURI, NSArray, NSString, NSDictionary;
@protocol TUIDSIDQueryController;

@interface CNKFaceTimeAvailabilityHelper : NSObject

@property (nonatomic, readonly) id<TUIDSIDQueryController> queryController;
@property (nonatomic, readonly) IDSURI *preferredFromID;

- (id)init;
- (void).cxx_destruct;
- (void)currentRemoteDevicesFor:(NSArray *)a0 service:(NSString *)a1 completionHandler:(void (^)(NSDictionary *))a2;
- (void)isDestinationAvailableForService:(NSString *)a0 service:(NSString *)a1 completionHandler:(void (^)(BOOL))a2;
- (void)isDestinationAvailableForServiceAndCapability:(NSString *)a0 service:(NSString *)a1 capability:(NSString *)a2 completionHandler:(void (^)(BOOL))a3;
- (void)isHandleAvailableForFaceTime:(TUHandle *)a0 completionHandler:(void (^)(BOOL))a1;
- (void)requiredIDStatusFor:(NSArray *)a0 service:(NSString *)a1 completionHandler:(void (^)(NSDictionary *))a2;

@end
