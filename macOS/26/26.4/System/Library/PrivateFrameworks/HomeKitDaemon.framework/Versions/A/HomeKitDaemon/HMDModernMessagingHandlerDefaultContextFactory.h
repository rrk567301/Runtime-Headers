@class HMDAccountRegistry;
@protocol HMDFeaturesDataSource;

@interface HMDModernMessagingHandlerDefaultContextFactory : NSObject <HMDModernMessagingHandlerContextFactory>

@property (readonly, nonatomic) HMDAccountRegistry *accountRegistry;
@property (readonly, nonatomic) id<HMDFeaturesDataSource> featuresDataSource;

- (id)initWithAccountRegistry:(id)a0;
- (id)deviceForAddress:(id)a0;
- (void).cxx_destruct;
- (id)createContextForRequestID:(id)a0;

@end
