@class NSString;
@protocol ABMetadataManager;

@interface ABMetadataOperation : NSOperation {
    NSString *_addressBookPath;
    char _addressBookTracksAllSources;
}

@property (readonly) id<ABMetadataManager> metadataManager;

- (void).cxx_destruct;
- (id)addressBookPath;
- (unsigned long long)metadataJobType;
- (char)addressBookTracksAllSources;
- (id)initWithMetadataManager:(id)a0;
- (char)lockInfo;
- (void)markUniqueIdsAsCompleted:(id)a0;
- (void)markUniqueIdsAsPlanned:(id)a0;
- (void)markViewedForRecord:(id)a0 tryAgain:(char)a1;
- (void)stamp;
- (void)unlockInfo;
- (void)validateAllMetaDataForceRebuild:(char)a0;
- (void)writeMetadata:(id)a0 toURL:(id)a1;

@end
