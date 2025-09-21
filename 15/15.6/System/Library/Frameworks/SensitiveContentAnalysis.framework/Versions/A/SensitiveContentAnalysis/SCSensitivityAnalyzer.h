@class NSObject, SCMediaAnalysisService;
@protocol OS_dispatch_queue;

@interface SCSensitivityAnalyzer : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) SCMediaAnalysisService *madService;
@property (readonly) long long analysisPolicy;

+ (char)_isSensitiveContentWarningEnabledForApplication:(id)a0 scanningPolicy:(id)a1;
+ (long long)_analysisPolicyFrom:(id)a0;
+ (char)_isCommunicationSafetyEnabled:(id)a0;
+ (char)_isSensitiveContentWarningEnabled:(id)a0;
+ (char)_isSensitiveContentWarningEnabledForAnyOfServices:(id)a0 scanningPolicy:(id)a1;
+ (char)_isSensitiveContentWarningEnabledForService:(id)a0 scanningPolicy:(id)a1;
+ (long long)analysisFeatureEnablement;
+ (Class)entitlementsReaderClass;
+ (char)isSensitiveContentWarningEnabledForAnyOfServices:(id)a0;
+ (char)isSensitiveContentWarningEnabledForService:(id)a0;
+ (Class)settingsReaderClass;
+ (id)subscribeForAnalysisAvailabilityChanges:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)analyzeImageFile:(id)a0 completionHandler:(id /* block */)a1;
- (void)analyzeVideoFile:(id)a0 useBlastdoor:(char)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (long long)_mapMOScanningPolicyEnumValue:(id)a0;
- (void)_runBlockOnDispatchQueueIfSet:(id /* block */)a0;
- (void)analyzeCGImage:(struct CGImage { } *)a0 completionHandler:(id /* block */)a1;
- (void)analyzeCGImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (void)analyzeFile:(id)a0 options:(unsigned long long)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)analyzeImageWithLocalIdentifier:(id)a0 fromPhotoLibraryWithURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)analyzePixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (id)analyzeVideoFile:(id)a0 completionHandler:(id /* block */)a1;
- (void)analyzeVideoFile:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)analyzeVideoWithLocalIdentifier:(id)a0 fromPhotoLibraryWithURL:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)initWithQueue:(id)a0 madService:(id)a1;
- (char)shouldAnalyzeMedia:(id *)a0;
- (char)shouldAnalyzeMediaWithType:(id)a0 error:(id)a1;

@end
