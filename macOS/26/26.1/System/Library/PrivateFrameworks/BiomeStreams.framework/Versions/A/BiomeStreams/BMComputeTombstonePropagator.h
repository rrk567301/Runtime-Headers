@class BMComputeSourceClient, NSString;

@interface BMComputeTombstonePropagator : NSObject {
    BMComputeSourceClient *_computeSource;
    NSString *_streamIdentifier;
    unsigned long long _domain;
    unsigned int _user;
}

- (id)computeSource;
- (void).cxx_destruct;
- (void)didWriteTombstone:(id)a0 timestamp:(double)a1 account:(id)a2 remoteName:(id)a3;
- (id)initWithStreamIdentifier:(id)a0 domain:(unsigned long long)a1 user:(unsigned int)a2;

@end
