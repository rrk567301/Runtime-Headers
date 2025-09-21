@class NSUUID, NSString, NSURL, NSDate, NSTimeZone, PHMediaFormatConversionSource, NSError, PHMediaFormatConversionDestination, PFMediaCapabilities, PHMediaFormatConversionCompositeRequest, NSProgress, CLLocation;

@interface PHMediaFormatConversionRequest : NSObject <NSProgressReporting> {
    double _formatConversionExpansionFactor;
    char _didCalculateRequiresFormatConversion;
    char _requiresFormatConversion;
}

@property (readonly) NSUUID *identifier;
@property (retain) PHMediaFormatConversionSource *source;
@property (retain) PFMediaCapabilities *destinationCapabilities;
@property (weak) PHMediaFormatConversionCompositeRequest *parentRequest;
@property (readonly) NSString *statusString;
@property (readonly) char requiresFormatConversion;
@property (readonly) char requiresPassthroughConversion;
@property (readonly) char requiresMetadataChanges;
@property (readonly) char isCompositeRequest;
@property (retain) NSProgress *progress;
@property (retain) NSURL *directoryForTemporaryFiles;
@property long long transferBehaviorUserPreference;
@property (copy) id /* block */ singlePassVideoConversionUpdateHandler;
@property char requiresSinglePassVideoConversion;
@property char shouldExportAsHDR;
@property (nonatomic) double formatConversionExpansionFactor;
@property (readonly) long long locationMetadataBehavior;
@property (readonly) CLLocation *location;
@property (readonly) long long creationDateMetadataBehavior;
@property (readonly) NSDate *creationDate;
@property (readonly) NSTimeZone *creationDateTimeZone;
@property (readonly) long long captionMetadataBehavior;
@property (readonly, copy) NSString *caption;
@property (readonly) long long accessibilityDescriptionMetadataBehavior;
@property (readonly, copy) NSString *accessibilityDescription;
@property (nonatomic) long long passthroughConversionAdditionalByteCount;
@property long long status;
@property char preflighted;
@property (retain) NSError *error;
@property (retain, nonatomic) PHMediaFormatConversionDestination *destination;
@property (readonly) long long backwardsCompatibilityStatus;
@property (readonly) unsigned long long estimatedOutputFileLength;
@property long long livePhotoPairingIdentifierBehavior;
@property (copy) NSString *livePhotoPairingIdentifier;
@property (nonatomic) char forceFormatConversion;
@property char shouldPadOutputFileToEstimatedLength;
@property char shouldStripLocation;
@property (retain) NSString *outputFilename;
@property (readonly) NSString *outputPathExtension;
@property (readonly) NSString *outputFileType;
@property char useTransferBehaviorUserPreference;
@property (retain) id userInfo;
@property (retain) NSString *videoExportPreset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestForSource:(id)a0 destinationCapabilities:(id)a1 error:(id *)a2;
+ (char)hasInternalDiagnostics;
+ (double)bitsPerPixelWithImageDimensions:(struct CGSize { double x0; double x1; })a0 fileLength:(unsigned long long)a1;
+ (double)heifToJPEGFactorForBitsPerPixel:(double)a0;
+ (double)heifToJPEGFactorWithImageDimensions:(struct CGSize { double x0; double x1; })a0 fileLength:(unsigned long long)a1;
+ (id)stringForRequestStatus:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)markAsCancelled;
- (void)setAccessibilityDescriptionMetadataBehavior:(long long)a0 withAccessibilityDescription:(id)a1;
- (void)setCaptionMetadataBehavior:(long long)a0 withCaption:(id)a1;
- (void)setCreationDateMetadataBehavior:(long long)a0 withCreationDate:(id)a1 inTimeZone:(id)a2;
- (void)setLocationMetadataBehavior:(long long)a0 withLocation:(id)a1;
- (void)enableSinglePassVideoEncodingWithUpdateHandler:(id /* block */)a0;
- (char)prepareWithError:(id *)a0;
- (void)preflightWithConversionManager:(id)a0;
- (char)_calculateRequiresFormatConversion;
- (char)destinationCapabilitiesHintsIndicateSupportForSource;
- (void)didFinishProcessing;
- (void)padOutputFileToEstimatedLength;
- (char)requiresAccessibilityDescriptionMetadataChange;
- (char)requiresCaptionMetadataChange;
- (char)requiresCreationDateMetadataChange;
- (char)requiresLivePhotoPairingIdentifierChange;
- (char)requiresLocationMetadataChange;
- (void)setupProgress;
- (char)sourceSupportsPassthroughConversion;
- (void)updateSinglePassVideoConversionStatus:(long long)a0 addedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 error:(id)a2;
- (char)userPreferenceProhibitsFormatConversion;

@end
