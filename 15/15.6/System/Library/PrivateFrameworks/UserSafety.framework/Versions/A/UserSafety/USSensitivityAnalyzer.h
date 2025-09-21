@class NSObject, SCSensitivityAnalyzer, SCMediaAnalysisService;
@protocol OS_dispatch_queue;

@interface USSensitivityAnalyzer : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SCSensitivityAnalyzer *_scsAnalyzer;
}

@property (retain, nonatomic) SCMediaAnalysisService *madService;

+ (char)isCommunicationSafetyEnabled;
+ (char)isNudityDetectionEnabled;
+ (char)isNudityDetectionEnabledForService:(id)a0;
+ (id)subscribeForAnalysisEnabledChanges:(id /* block */)a0;
+ (char)_isCommunicationSafetyEnabled:(id)a0;
+ (Class)entitlementsReaderClass;
+ (Class)settingsReaderClass;
+ (char)isAnalysisEnabled;
+ (char)_isAnalysisEnabled:(id)a0;
+ (char)_isNudityDetectionEnabled:(id)a0;
+ (char)_isNudityDetectionEnabledForAnyOfServices:(id)a0 scanningPolicy:(id)a1;
+ (char)_isNudityDetectionEnabledForApplication:(id)a0 scanningPolicy:(id)a1;
+ (char)_isNudityDetectionEnabledForService:(id)a0 scanningPolicy:(id)a1;
+ (char)isNudityDetectionEnabledForAnyOfServices:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)analyzeCGImage:(struct CGImage { } *)a0 withOrientation:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (void)analyzeImageFile:(id)a0 completionHandler:(id /* block */)a1;
- (void)analyzeVideoFile:(id)a0 useBlastdoor:(char)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)analyzeImageWithLocalIdentifier:(id)a0 fromPhotoLibraryWithURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)analyzeVideoFile:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)analyzeVideoWithLocalIdentifier:(id)a0 fromPhotoLibraryWithURL:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)initWithQueue:(id)a0 madService:(id)a1;

@end
