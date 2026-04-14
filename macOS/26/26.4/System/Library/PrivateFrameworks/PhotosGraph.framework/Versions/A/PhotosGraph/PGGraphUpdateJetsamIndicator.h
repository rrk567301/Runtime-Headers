@class NSURL;

@interface PGGraphUpdateJetsamIndicator : NSObject

@property (readonly, nonatomic) NSURL *indicatorURL;
@property (nonatomic) long long retryCount;
@property (nonatomic) BOOL indicatorExists;
@property (nonatomic) long long maxRetryCount;
@property (readonly, nonatomic) BOOL updateDidCauseJetsam;

- (void)clear;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPhotoLibrary:(id)a0;
- (void)_readIndicator;
- (void)_removeIndicator;
- (id)initWithIndicatorDirectoryURL:(id)a0;
- (void)markUpdate;

@end
