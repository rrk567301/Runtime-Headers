@class NSString, NSArray;

@interface CCSpotlightImageAttributes : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) unsigned int ISOSpeed;
@property (nonatomic) BOOL hasISOSpeed;
@property (readonly, nonatomic) NSString *acquisitionMake;
@property (readonly, nonatomic) NSString *acquisitionModel;
@property (readonly, nonatomic) double aperture;
@property (nonatomic) BOOL hasAperture;
@property (readonly, nonatomic) unsigned int bitsPerSample;
@property (nonatomic) BOOL hasBitsPerSample;
@property (readonly, nonatomic) NSString *cameraOwner;
@property (readonly, nonatomic) NSString *colorSpace;
@property (readonly, nonatomic) BOOL flashOn;
@property (nonatomic) BOOL hasFlashOn;
@property (readonly, nonatomic) double focalLength;
@property (nonatomic) BOOL hasFocalLength;
@property (readonly, nonatomic) BOOL focalLength35mm;
@property (nonatomic) BOOL hasFocalLength35mm;
@property (readonly, nonatomic) NSArray *layerNames;
@property (readonly, nonatomic) NSString *lensModel;
@property (readonly, nonatomic) unsigned int orientation;
@property (nonatomic) BOOL hasOrientation;
@property (readonly, nonatomic) unsigned long long pixelCount;
@property (nonatomic) BOOL hasPixelCount;
@property (readonly, nonatomic) unsigned long long pixelHeight;
@property (nonatomic) BOOL hasPixelHeight;
@property (readonly, nonatomic) unsigned long long pixelWidth;
@property (nonatomic) BOOL hasPixelWidth;
@property (readonly, nonatomic) unsigned int whiteBalance;
@property (nonatomic) BOOL hasWhiteBalance;
@property (readonly, nonatomic) NSString *EXIFGPSVersion;
@property (readonly, nonatomic) NSString *EXIFVersion;
@property (readonly, nonatomic) NSString *exposureMode;
@property (readonly, nonatomic) NSString *exposureProgram;
@property (readonly, nonatomic) double exposureTime;
@property (nonatomic) BOOL hasExposureTime;
@property (readonly, nonatomic) NSString *exposureTimeString;
@property (readonly, nonatomic) double fNumber;
@property (nonatomic) BOOL hasFNumber;
@property (readonly, nonatomic) BOOL hasAlphaChannel;
@property (nonatomic) BOOL hasHasAlphaChannel;
@property (readonly, nonatomic) double maxAperture;
@property (nonatomic) BOOL hasMaxAperture;
@property (readonly, nonatomic) NSString *meteringMode;
@property (readonly, nonatomic) NSString *profileName;
@property (readonly, nonatomic) unsigned int redEyeOn;
@property (nonatomic) BOOL hasRedEyeOn;
@property (readonly, nonatomic) double resolutionHeightDPI;
@property (nonatomic) BOOL hasResolutionHeightDPI;
@property (readonly, nonatomic) double resolutionWidthDPI;
@property (nonatomic) BOOL hasResolutionWidthDPI;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithISOSpeed:(id)a0 acquisitionMake:(id)a1 acquisitionModel:(id)a2 aperture:(id)a3 bitsPerSample:(id)a4 cameraOwner:(id)a5 colorSpace:(id)a6 flashOn:(id)a7 focalLength:(id)a8 focalLength35mm:(id)a9 layerNames:(id)a10 lensModel:(id)a11 orientation:(id)a12 pixelCount:(id)a13 pixelHeight:(id)a14 pixelWidth:(id)a15 whiteBalance:(id)a16 EXIFGPSVersion:(id)a17 EXIFVersion:(id)a18 exposureMode:(id)a19 exposureProgram:(id)a20 exposureTime:(id)a21 exposureTimeString:(id)a22 fNumber:(id)a23 hasAlphaChannel:(id)a24 maxAperture:(id)a25 meteringMode:(id)a26 profileName:(id)a27 redEyeOn:(id)a28 resolutionHeightDPI:(id)a29 resolutionWidthDPI:(id)a30 error:(id *)a31;

@end
