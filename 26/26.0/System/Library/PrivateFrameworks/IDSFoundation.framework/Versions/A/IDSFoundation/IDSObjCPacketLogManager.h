@class NSString, NSError;

@interface IDSObjCPacketLogManager : NSObject

+ (void)clean;
+ (void)copyPacketLogsToTmpDirectoryWithCompletionHandler:(void (^)(NSString *, NSError *))a0;

- (id)init;

@end
