@protocol CNDonationLoggerProvider;

@interface CNDDonorLoader : NSObject

@property (readonly, nonatomic) id<CNDonationLoggerProvider> loggerProvider;

+ (id)currentExtensionsObservable;
+ (id)continuousExtensionsObservable;
+ (id)extensionAttributes;

- (id)init;
- (void).cxx_destruct;
- (id)donorWithIdentifier:(id)a0;

@end
