@class NSString;
@protocol CRKRequestPerformingProtocol, CRKConfigurationSource, CRKFeatureFlags;

@interface CRKCurrentPlatformProfileConfigurationSource : NSObject <CRKConfigurationSource> {
    id<CRKConfigurationSource> mBaseSource;
}

@property (readonly, nonatomic) id<CRKFeatureFlags> featureFlags;
@property (readonly, nonatomic) id<CRKRequestPerformingProtocol> studentDaemonProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithCallbackQueue:(id)a0;
- (void).cxx_destruct;
- (void)fetchConfiguration:(id /* block */)a0;
- (id)initWithStudentDaemonProxy:(id)a0 callbackQueue:(id)a1;
- (id)makeSourceForCurrentPlatformWithCallbackQueue:(id)a0;
- (void)setConfiguration:(id)a0 completion:(id /* block */)a1;

@end
