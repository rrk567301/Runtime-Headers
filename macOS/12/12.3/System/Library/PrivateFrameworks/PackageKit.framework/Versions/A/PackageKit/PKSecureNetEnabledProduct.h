@class NSString, PKArchive;

@interface PKSecureNetEnabledProduct : PKNetEnabledProduct {
    PKArchive *_distArchive;
    NSString *_archivePath;
    NSString *_tempArchivePath;
}

+ (id)productInfoFilename;

- (void)dealloc;
- (BOOL)commitReturningError:(id *)a0;
- (id)productType;
- (id)initByLoadingProductAtURL:(id)a0 error:(id *)a1;
- (id)_archiveForTrustEvaluation;
- (BOOL)didReceiveData:(id)a0 fromDistributionURL:(id)a1 error:(id *)a2;
- (id)_distributionArchivePath;
- (BOOL)_isDistributionArchiveInProductOnDisk:(id)a0;
- (id)_distributionArchiveWriteURL;
- (BOOL)_populateWithDistributionArchiveReturningError:(id *)a0;

@end
