@class NSData, NSError;

@interface IDSToolObjCRequestHandler : NSObject

+ (void)handleMessage:(NSData *)a0 completionHandler:(void (^)(NSData *, NSError *))a1;

- (id)init;

@end
