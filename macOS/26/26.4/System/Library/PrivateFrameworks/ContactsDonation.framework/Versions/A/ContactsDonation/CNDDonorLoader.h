@protocol CNDonationLoggerProvider;

@interface CNDDonorLoader : NSObject

@property (readonly, nonatomic) id<CNDonationLoggerProvider> loggerProvider;

+ (id)continuousExtensionsObservable;
+ (id)currentExtensionsObservable;
+ (id)extensionAttributes;

- (void).cxx_destruct;
- (id)init;
- (id)donorWithIdentifier:(id)a0;

@end
