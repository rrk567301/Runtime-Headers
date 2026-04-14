@class NSString, PLInternalResource;

@interface PLVideoInternalResource : NSObject <PLVideoResource>

@property (readonly, nonatomic) PLInternalResource *backingResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)deviceSupportsHDR;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned int)version;
- (BOOL)isStreamable;
- (BOOL)isPlayable;
- (BOOL)isDownloadable;
- (id)uniformTypeIdentifier;
- (id)fileURLIfLocal;
- (unsigned short)storeClassID;
- (BOOL)isLocallyAvailable;
- (id)additionalDescription;
- (BOOL)isLocallyGeneratable;
- (BOOL)isLargeQuality;
- (BOOL)isOriginalVideo;
- (BOOL)isOriginalVideoComplement;
- (BOOL)matchesOrExceedsQualityLevel:(unsigned int)a0;
- (BOOL)hasAssociatedMediaMetadata;
- (BOOL)isHDRDerivative;
- (BOOL)isSDRFallback;
- (BOOL)isHDROrSDRDependingOnMasterVideo;
- (id)initWithBackingResource:(id)a0;

@end
