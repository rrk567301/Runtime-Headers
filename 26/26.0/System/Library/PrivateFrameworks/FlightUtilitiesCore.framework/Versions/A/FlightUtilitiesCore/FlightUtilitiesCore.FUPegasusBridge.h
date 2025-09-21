@class NSString, NSArray, NSError, NSDate;

@interface FlightUtilitiesCore.FUPegasusBridge : NSObject

+ (void)fetchUpdateFor:(NSString *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
+ (void)flightSearchResponseFor:(NSString *)a0 date:(NSDate *)a1 clientBundleIdentifier:(NSString *)a2 completionHandler:(void (^)(NSArray *, NSError *))a3;
+ (void)subscribeTo:(NSString *)a0 date:(NSDate *)a1 clientBundleIdentifier:(NSString *)a2 completionHandler:(void (^)(NSString *, NSError *))a3;
+ (void)subscribeTo:(NSString *)a0 date:(NSDate *)a1 clientBundleIdentifier:(NSString *)a2 pushMessagesHandler:(void (^)(NSArray *))a3 completionHandler:(void (^)(NSString *, NSError *))a4;
+ (id)unsubscribeWithChannelId:(id)a0;

- (id)init;

@end
