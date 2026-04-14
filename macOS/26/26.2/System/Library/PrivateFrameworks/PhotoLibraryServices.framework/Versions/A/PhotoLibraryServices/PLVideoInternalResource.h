@class NSString, NSNumber, PLInternalResource;

@interface PLVideoInternalResource : NSObject <PLVideoResource> {
    NSNumber *_cachedIsPlayable;
}

@property (readonly, nonatomic) PLInternalResource *backingResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)deviceSupportsHDR;

- (id)uniformTypeIdentifier;
- (unsigned short)storeClassID;
- (BOOL)isLocallyAvailable;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isPlayable;
- (unsigned int)version;
- (BOOL)isDownloadable;
- (BOOL)isStreamable;
- (id)additionalDescription;
- (id)fileURLIfLocal;
- (BOOL)isHDRDerivative;
- (BOOL)isOriginalVideo;
- (id)cachedIsPlayable;
- (BOOL)hasAssociatedMediaMetadata;
- (id)initWithBackingResource:(id)a0;
- (BOOL)isHDROrSDRDependingOnMasterVideo;
- (BOOL)isLargeQuality;
- (BOOL)isLocallyGeneratable;
- (BOOL)isOriginalVideoComplement;
- (BOOL)isSDRFallback;
- (BOOL)matchesOrExceedsQualityLevel:(unsigned int)a0;

@end
