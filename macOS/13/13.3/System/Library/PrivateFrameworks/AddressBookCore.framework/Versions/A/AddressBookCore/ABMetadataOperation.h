@class NSString;
@protocol ABMetadataManager;

@interface ABMetadataOperation : NSOperation {
    NSString *_addressBookPath;
    BOOL _addressBookTracksAllSources;
}

@property (readonly) id<ABMetadataManager> metadataManager;

- (void).cxx_destruct;
- (id)addressBookPath;
- (unsigned long long)metadataJobType;
- (BOOL)addressBookTracksAllSources;
- (id)initWithMetadataManager:(id)a0;
- (BOOL)lockInfo;
- (void)markUniqueIdsAsCompleted:(id)a0;
- (void)markUniqueIdsAsPlanned:(id)a0;
- (void)markViewedForRecord:(id)a0 tryAgain:(BOOL)a1;
- (void)stamp;
- (void)unlockInfo;
- (void)validateAllMetaDataForceRebuild:(BOOL)a0;
- (void)writeMetadata:(id)a0 toURL:(id)a1;

@end
