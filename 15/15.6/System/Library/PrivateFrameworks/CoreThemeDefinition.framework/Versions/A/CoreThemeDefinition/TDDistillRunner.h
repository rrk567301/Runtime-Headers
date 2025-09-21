@class NSString, NSURL, TDLogger, TDDistiller;

@interface TDDistillRunner : NSObject {
    char _packDocument;
    TDDistiller *_distiller;
    NSURL *_carScratchURL;
}

@property (copy, nonatomic) NSURL *outputURL;
@property (retain, nonatomic) TDLogger *logger;
@property (copy) NSString *assetStoreVersionString;
@property long long assetStoreVersionNumber;
@property (nonatomic) char packImagesInDocument;
@property (nonatomic) NSString *minDeploymentTarget;

- (void)dealloc;
- (id)init;
- (char)_isDistillUnnecessaryForDocument:(id)a0;
- (void)_moveScratchToOutputPath;
- (void)_removeScratchPath;
- (id)carScratchURL;
- (char)runDistillWithDocumentURL:(id)a0 outputURL:(id)a1 attemptIncremental:(char)a2 forceDistill:(char)a3;

@end
