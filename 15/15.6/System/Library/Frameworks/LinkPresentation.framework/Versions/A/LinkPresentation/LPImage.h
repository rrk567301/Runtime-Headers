@class NSData, NSString, NSArray, NSURL, NSItemProvider, LPImageProperties, NSImage, NSObject;
@protocol OS_dispatch_group;

@interface LPImage : NSObject <LPAsynchronousResource, LPCodable, NSSecureCoding> {
    NSImage *_originalPlatformImage;
    NSImage *_decodedPlatformImage;
    NSString *_MIMEType;
    LPImageProperties *_properties;
    NSItemProvider *_itemProvider;
    LPImage *_imageLoadedFromItemProvider;
    NSObject<OS_dispatch_group> *_itemProviderLoadGroup;
    struct CGSize { double width; double height; } _pixelSize;
    char _isAnimated;
    char _hasComputedPixelSize;
    char _hasTransparency;
    char _hasComputedHasTransparency;
    char _hasComputedIsAnimated;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, readonly) char _isLowResolutionAsImage;
@property (retain, nonatomic) NSImage *platformImage;
@property (retain, setter=_setAsynchronousLoadGroup:) NSObject<OS_dispatch_group> *_asynchronousLoadGroup;
@property (retain) NSData *_cachedAtomicData;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } _pixelSize;
@property (readonly, nonatomic) char _isImperceptible;
@property (readonly, nonatomic) char _hasTransparency;
@property (readonly, nonatomic, getter=_isAnimated) char _animated;
@property (nonatomic, getter=_isFallbackIcon) char _fallbackIcon;
@property (retain, nonatomic) NSArray *_remoteURLsForEmailCompatibleOutput;
@property (readonly, copy, nonatomic) NSString *_srcsetForRemoteURLs;
@property (copy, nonatomic) id /* block */ _alternateHTMLImageGenerator;
@property (readonly, retain, nonatomic) NSItemProvider *_itemProvider;
@property (retain, nonatomic, setter=_setDarkInterfaceAlternativeImage:) LPImage *_darkInterfaceAlternativeImage;
@property (nonatomic, getter=_isPrecomposedAppIcon) char _precomposedAppIcon;
@property (nonatomic) char _useLossyCompressionForEncodedData;
@property (nonatomic) char _isNonFallbackSymbolImage;
@property (readonly, copy, nonatomic) NSString *_symbolName;
@property (retain, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *MIMEType;
@property (readonly, copy, nonatomic) LPImageProperties *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long _encodedSize;
@property (readonly, nonatomic) char _canEncodeWithoutComputation;

+ (id)_systemImageNamed:(id)a0;
+ (id)_PNGImageNamed:(id)a0;
+ (id)_PDFImageNamed:(id)a0 template:(char)a1;
+ (id)_PNGImageNamed:(id)a0 template:(char)a1 properties:(id)a2;
+ (id)_loadImageSubsampledToScreenSizeFromData:(id)a0;
+ (id)_systemImageNamed:(id)a0 withSymbolConfiguration:(id)a1;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 MIMEType:(id)a1;
- (id)_initWithImage:(id)a0;
- (id)initWithPlatformImage:(id)a0;
- (id)initWithPlatformImage:(id)a0 properties:(id)a1;
- (id)filledVariant;
- (id)_asTemplate;
- (void)_computeDominantColorForProperties;
- (void)_createDataFromPlatformImage;
- (id)_existingPlatformImage;
- (id)_initWithCGImage:(struct CGImage { } *)a0;
- (id)_initWithCGImage:(struct CGImage { } *)a0 properties:(id)a1;
- (id)_initWithImage:(id)a0 properties:(id)a1;
- (id)_initWithPlatformImageGenerator:(id /* block */)a0 properties:(id)a1;
- (char)_isLowResolutionAsIconWithScaleFactor:(double)a0;
- (char)_isSubstitute;
- (void)_mapDataFromFileURL;
- (void)_synchronouslyDecodePlatformImageWithMaximumSize:(struct CGSize { double x0; double x1; })a0;
- (void)_waitForAsynchronouslyLoadedImageIfNeeded;
- (char)hasPlaceholderValueForAsynchronousLoad;
- (id)initByReferencingFileURL:(id)a0 MIMEType:(id)a1;
- (id)initByReferencingFileURL:(id)a0 MIMEType:(id)a1 properties:(id)a2;
- (id)initWithData:(id)a0 MIMEType:(id)a1 properties:(id)a2;
- (id)initWithItemProvider:(id)a0 properties:(id)a1 placeholderImage:(id)a2;
- (void)loadAsynchronouslyWithCompletionHandler:(id /* block */)a0;
- (char)needsAsynchronousLoad;

@end
