@interface VCVTPWrapper : NSObject

+ (id)targetQueue;
+ (id)connectionContext;
+ (void)startVTP;
+ (void)stopVTP;

@end
