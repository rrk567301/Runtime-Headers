@class NSString, NSURL, TDLogger, TDDistiller;

@interface TDDistillRunner : NSObject {
    BOOL _packDocument;
    TDDistiller *_distiller;
    NSURL *_carScratchURL;
}

@property (copy, nonatomic) NSURL *outputURL;
@property (retain, nonatomic) TDLogger *logger;
@property (copy) NSString *assetStoreVersionString;
@property long long assetStoreVersionNumber;
@property (nonatomic) BOOL packImagesInDocument;
@property (nonatomic) NSString *minDeploymentTarget;

- (void)dealloc;
- (id)init;
- (id)carScratchURL;
- (void)_removeScratchPath;
- (void)_moveScratchToOutputPath;
- (BOOL)_isDistillUnnecessaryForDocument:(id)a0;
- (BOOL)runDistillWithDocumentURL:(id)a0 outputURL:(id)a1 attemptIncremental:(BOOL)a2 forceDistill:(BOOL)a3;

@end
