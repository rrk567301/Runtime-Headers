@class NSURL, NSError, NSFileHandle, NSDate, NSDictionary, QLCacheFileProviderVersionedFileIdentifier, UTType, QLThumbnailRepresentation, NSString, FPSandboxingURLWrapper, QLCacheBasicVersionedFileIdentifier, NSData, FPItem, NSUUID;

@interface QLThumbnailGenerationRequest : NSObject <NSCopying, NSSecureCoding> {
    UTType *_contentType;
    NSString *_contentTypeUTI;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) QLThumbnailRepresentation *mostRepresentativeThumbnail;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ statusBlock;
@property (readonly, nonatomic) long long mostRepresentativeTypeForWhichUpdateBlockHasBeenCalled;
@property (retain, nonatomic) FPSandboxingURLWrapper *quicklookSandboxWrapper;
@property (retain, nonatomic) FPSandboxingURLWrapper *genericSandboxWrapper;
@property (retain, nonatomic) FPSandboxingURLWrapper *parentDirectorySandboxWrapper;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) FPItem *item;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSString *contentTypeUTI;
@property (retain, nonatomic) QLCacheBasicVersionedFileIdentifier *basicFileIdentifier;
@property (retain, nonatomic) QLCacheFileProviderVersionedFileIdentifier *fileProviderFileIdentifier;
@property (nonatomic) unsigned long long badgeType;
@property (nonatomic) long long iconVariant;
@property (nonatomic) char wantsBaseline;
@property (nonatomic) long long generationBehavior;
@property (nonatomic) int interpolationQuality;
@property (retain, nonatomic) NSError *requestIsInvalidError;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long representationTypes;
@property (retain, nonatomic) NSDictionary *externalThumbnailGeneratorData;
@property (nonatomic) unsigned long long externalThumbnailGeneratorDataHash;
@property (nonatomic) char shouldUseRestrictedExtension;
@property (nonatomic, getter=isCancelled) char cancelled;
@property (nonatomic, getter=isFinished) char finished;
@property (retain, nonatomic) NSDate *beginDate;
@property (retain, nonatomic) QLThumbnailRepresentation *mostRepresentativeThumbnail;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ statusBlock;
@property (retain, nonatomic) FPSandboxingURLWrapper *saveURLSandboxWrapper;
@property (retain, nonatomic) NSFileHandle *saveFileHandle;
@property (nonatomic, getter=isDownloadingAllowed) char downloadingAllowed;
@property (retain, nonatomic) UTType *saveURLContentType;
@property (nonatomic) unsigned long long typesForWhichUpdateBlockHasBeenCalled;
@property (retain, nonatomic) UTType *overriddenContentType;
@property (retain, nonatomic) NSString *overriddenContentTypeIdentifier;
@property (nonatomic) char thirdPartyVideoDecodersAllowed;
@property (copy, nonatomic) UTType *contentType;
@property (nonatomic) double minimumDimension;
@property (nonatomic) char iconMode;

+ (id)_basicFileIdentifierForURL:(id)a0 error:(id *)a1;
+ (id)_fileProviderFileIdentifierForFPItem:(id)a0;
+ (id)customExtensionCommunicationEncodedClasses;
+ (id)requestWithThumbnailRequest:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)isValid;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)finish;
- (void)cancel;
- (char)isUbiquitous;
- (id)fileIdentifier;
- (id)initWithFPItem:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 representationTypes:(unsigned long long)a3;
- (id)initWithFileAtURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 representationTypes:(unsigned long long)a3;
- (char)forceGeneration;
- (id)saveURL;
- (long long)requestedMostRepresentativeType;
- (id)_stateDescription;
- (id)copyWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)equivalentFPItemRequestWithItem:(id)a0 representationTypes:(unsigned long long)a1;
- (id)initWithData:(id)a0 contentType:(id)a1 size:(struct CGSize { double x0; double x1; })a2 scale:(double)a3 representationTypes:(unsigned long long)a4;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 representationTypes:(unsigned long long)a2;
- (char)isDataBased;
- (char)isFileBased;
- (void)markDidBegin;
- (float)maximumPixelSize;
- (void)noteUpdateBlockHasBeenCalledForType:(long long)a0;
- (char)prepareForSending;
- (char)provideCachedResultsOnly;
- (char)provideFullResolutionThumbnail;
- (char)provideGenericIcon;
- (char)provideLowQualityThumbnail;
- (char)resultShouldBeSavedToDisk;
- (void)setSaveURL:(id)a0;
- (char)thumbnailRepresentationTypeMatchesRequestedMostRepresentativeType:(long long)a0;

@end
