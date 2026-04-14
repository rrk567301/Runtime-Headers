@class NSNumber, NSError;
@protocol AMSBagProtocol;

@interface AMSMetricsIdentifierStorePrivateIdentifiersInterop : NSObject

+ (void)performPrivateIdentifiersUserInitiatedRotationWithBag:(id<AMSBagProtocol>)a0 dsid:(NSNumber *)a1 completionHandler:(void (^)(NSError *))a2;

- (id)init;

@end
