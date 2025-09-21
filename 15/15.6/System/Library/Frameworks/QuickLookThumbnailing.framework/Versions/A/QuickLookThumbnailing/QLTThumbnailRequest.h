@class NSUUID, NSString, QLCacheVersionedFileIdentifier;

@interface QLTThumbnailRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSUUID *uuid;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double scale;
@property (readonly) float maximumPixelSize;
@property (readonly) QLCacheVersionedFileIdentifier *fileIdentifier;
@property (copy, nonatomic) NSString *contentType;
@property (nonatomic) char shouldProvideFoldedGenericIcon;
@property (nonatomic) unsigned long long badgeType;
@property (readonly, nonatomic) char provideGenericIcon;
@property (readonly, nonatomic) char provideLowQualityThumbnail;
@property (readonly, nonatomic) char provideFullResolutionThumbnail;
@property (readonly, nonatomic) long long requestedMostRepresentativeType;
@property (readonly) char iconMode;
@property int flavor;
@property (nonatomic) double minimumDimension;
@property char wantsBaseline;
@property long long generationBehavior;
@property (readonly, nonatomic) char provideCachedResultsOnly;
@property (readonly, nonatomic) char forceGeneration;
@property (nonatomic) unsigned long long requestedTypes;

+ (id)thumbnailRequestForFileAtURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 minimumSize:(double)a2 scale:(double)a3 iconMode:(char)a4;
+ (id)thumbnailRequestForFileAtURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 minimumSize:(double)a2 scale:(double)a3 iconMode:(char)a4 error:(id *)a5;
+ (id)thumbnailRequestForFileAtURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 iconMode:(char)a3;
+ (id)thumbnailRequestForFileAtURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 iconMode:(char)a3 error:(id *)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)computeContentType;
- (id)initWithVersionedFileIdentifier:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 iconMode:(char)a3 flavor:(int)a4 wantsBaseline:(char)a5 minimumDimension:(double)a6 requestedTypes:(unsigned long long)a7;

@end
