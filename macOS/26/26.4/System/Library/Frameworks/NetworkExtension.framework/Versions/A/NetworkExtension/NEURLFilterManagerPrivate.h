@class NSUUID, NSError;

@interface NEURLFilterManagerPrivate : NSObject

+ (void)enableConfig:(BOOL)a0 serviceID:(NSUUID *)a1 completion:(void (^)(NSError *))a2;

- (id)init;

@end
