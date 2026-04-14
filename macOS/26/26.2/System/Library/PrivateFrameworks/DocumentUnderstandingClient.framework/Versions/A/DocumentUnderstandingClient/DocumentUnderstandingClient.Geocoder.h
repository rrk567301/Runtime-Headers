@class NSString, NSData, NSError;

@interface DocumentUnderstandingClient.Geocoder : NSObject

+ (void)geocodeAddress:(NSString *)a0 withTimeout:(double)a1 completionHandler:(void (^)(NSData *, NSError *))a2;

- (void).cxx_destruct;
- (id)init;

@end
