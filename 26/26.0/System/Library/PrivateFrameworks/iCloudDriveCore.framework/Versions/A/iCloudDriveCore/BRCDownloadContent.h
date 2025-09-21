@class NSIndexSet, BRCProgress, BRCServerZone;
@protocol BRCDownloadStagingProtocol;

@interface BRCDownloadContent : BRCDownload {
    BRCServerZone *_zone;
    int _kind;
    BOOL _isFinderBookmark;
    id<BRCDownloadStagingProtocol> _downloadStager;
}

@property (readonly, nonatomic) NSIndexSet *desiredIndices;
@property (readonly, nonatomic) BOOL isLoser;
@property (readonly, nonatomic) BOOL isDocumentModifiedByOtherUser;
@property (readonly, nonatomic) BOOL requiresTwoPhase;
@property (retain, nonatomic) BRCProgress *progress;

- (void)setProgress:(id)a0;
- (int)kind;
- (id)description;
- (void).cxx_destruct;
- (id)_getDesiredPackageIndicesUsingReader:(id)a0 savedContentsURL:(id)a1 package:(id)a2 itemCount:(unsigned long long)a3 error:(id *)a4;
- (void)_prepareDataForPackageTwoPhaseDownloadIfNeededForItem:(id)a0;
- (BOOL)_prepareSecondStageWithManifest:(id)a0 package:(id)a1 error:(id *)a2;
- (BOOL)_stageWithError:(id *)a0;
- (BOOL)_stageWithManifest:(id)a0 package:(id)a1 xattrsPackage:(id)a2 error:(id *)a3;
- (id)etagIfLoser;
- (id)initWithDocument:(id)a0 stageID:(id)a1 etagIfLoser:(id)a2 downloadKind:(int)a3 downloadStager:(id)a4;

@end
