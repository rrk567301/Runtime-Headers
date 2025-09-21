@class NSString, NSNumber, PLInternalResource;

@interface PLVideoInternalResource : NSObject <PLVideoResource> {
    NSNumber *_cachedIsPlayable;
}

@property (readonly, nonatomic) PLInternalResource *backingResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)deviceSupportsHDR;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned int)version;
- (char)isStreamable;
- (id)additionalDescription;
- (char)isPlayable;
- (char)isDownloadable;
- (id)uniformTypeIdentifier;
- (id)fileURLIfLocal;
- (char)isLocallyAvailable;
- (unsigned short)storeClassID;
- (char)isHDRDerivative;
- (char)isOriginalVideo;
- (id)cachedIsPlayable;
- (char)hasAssociatedMediaMetadata;
- (id)initWithBackingResource:(id)a0;
- (char)isHDROrSDRDependingOnMasterVideo;
- (char)isLargeQuality;
- (char)isLocallyGeneratable;
- (char)isOriginalVideoComplement;
- (char)isSDRFallback;
- (char)matchesOrExceedsQualityLevel:(unsigned int)a0;

@end
