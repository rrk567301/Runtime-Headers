@protocol CRKConfigurationSource;

@interface CRKSynchronousConfigurationSource : NSObject {
    id<CRKConfigurationSource> mBaseSource;
}

- (void).cxx_destruct;
- (id)configurationWithError:(id *)a0;
- (id)initWithConfigurationSource:(id)a0;
- (char)setConfiguration:(id)a0 error:(id *)a1;

@end
