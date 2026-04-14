@class NSString;
@protocol ABMetadataManager;

@interface ABMetadataOperation : NSOperation {
    NSString *_addressBookPath;
    BOOL _addressBookTracksAllSources;
}

@property (readonly) id<ABMetadataManager> metadataManager;

- (void).cxx_destruct;
- (BOOL)lockInfo;
- (void)unlockInfo;
- (void)stamp;
- (void)writeMetadata:(id)a0 toURL:(id)a1;
- (void)markViewedForRecord:(id)a0 tryAgain:(BOOL)a1;
- (void)validateAllMetaDataForceRebuild:(BOOL)a0;
- (id)initWithMetadataManager:(id)a0;
- (void)markUniqueIdsAsPlanned:(id)a0;
- (void)markUniqueIdsAsCompleted:(id)a0;
- (int)metadataJobType;
- (BOOL)addressBookTracksAllSources;
- (id)addressBookPath;

@end
