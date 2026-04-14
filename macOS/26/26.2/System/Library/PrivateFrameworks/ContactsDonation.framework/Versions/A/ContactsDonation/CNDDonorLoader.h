@protocol CNDonationLoggerProvider;

@interface CNDDonorLoader : NSObject

@property (readonly, nonatomic) id<CNDonationLoggerProvider> loggerProvider;

+ (id)currentExtensionsObservable;
+ (id)extensionAttributes;
+ (id)continuousExtensionsObservable;

- (void).cxx_destruct;
- (id)init;
- (id)donorWithIdentifier:(id)a0;

@end
