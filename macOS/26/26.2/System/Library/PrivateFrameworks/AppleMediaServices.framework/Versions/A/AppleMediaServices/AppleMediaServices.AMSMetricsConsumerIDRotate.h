@class NSArray, AMSAccountIdentity, NSError, NSNumber;
@protocol AMSBagProtocol;

@interface AppleMediaServices.AMSMetricsConsumerIDRotate : NSObject

+ (void)rotateWithAccountID:(AMSAccountIdentity *)a0 bag:(id<AMSBagProtocol>)a1 namespaceList:(NSArray *)a2 completionHandler:(void (^)(NSNumber *, NSError *))a3;

- (id)init;

@end
