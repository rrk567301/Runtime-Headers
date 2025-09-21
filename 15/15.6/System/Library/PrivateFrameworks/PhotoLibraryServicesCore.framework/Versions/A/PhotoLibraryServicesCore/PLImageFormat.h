@class NSString;

@interface PLImageFormat : NSObject

@property (nonatomic) unsigned short formatID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) char isCropped;
@property (readonly, nonatomic) double dimension;
@property (readonly, nonatomic) long long thumbnailKind;
@property (readonly, nonatomic) long long formatMode;
@property (readonly, nonatomic) char isSquare;
@property (readonly, nonatomic) char dimensionsReferToShortSide;
@property (readonly, nonatomic) char isTable;
@property (readonly, nonatomic) char isThumbnail;
@property (readonly, nonatomic) char isAlwaysFullScreen;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) char refersToLatestVersion;
@property (readonly, nonatomic) char refersToUnadjustedVersion;
@property (readonly, nonatomic) char refersToPenultimateVersion;
@property (readonly, nonatomic) char refersToOriginalVersion;
@property (readonly, nonatomic) unsigned long long metalPixelFormat;
@property (readonly, nonatomic) struct __CFString { } *colorSpaceName;

+ (id)formatWithID:(unsigned short)a0;
+ (id)_syncFormats;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)shortDescription;
- (char)isEqualToFormat:(id)a0;
- (char)isThumbnail;
- (char)isTable;
- (unsigned long long)tableFormatBytesPerRowForWidth:(int)a0;
- (id)createTableWithPath:(id)a0 readOnly:(char)a1 format:(id)a2;
- (unsigned long long)fullSizeDesiredLongSide;
- (unsigned long long)fullSizeMaxLongSide;
- (unsigned long long)fullSizeMinShortSide;
- (struct CGSize { double x0; double x1; })scaledSizeForSourceSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })scaledSizeForSourceSize:(struct CGSize { double x0; double x1; })a0 capLength:(char)a1;
- (id)thumbnailSpecification;
- (char)_canDegradeToFormat:(id)a0;
- (char)_isAcceptableForViewSize:(struct CGSize { double x0; double x1; })a0 contentMode:(long long)a1 sourceAspectRatio:(double)a2 desiredImageSize:(struct CGSize { double x0; double x1; })a3 demoteFactor:(double)a4;
- (struct CGSize { double x0; double x1; })_shortSideFormatScaledSizeForSourceSize:(struct CGSize { double x0; double x1; })a0 capLength:(char)a1;
- (Class)_tableClass;
- (id)initWithFormatID:(unsigned short)a0;
- (id)initWithName:(id)a0 size:(struct CGSize { double x0; double x1; })a1 isCropped:(char)a2;
- (id)initWithName:(id)a0 size:(struct CGSize { double x0; double x1; })a1 isCropped:(char)a2 version:(long long)a3 isAlwaysFullScreen:(char)a4;
- (id)initWithName:(id)a0 size:(struct CGSize { double x0; double x1; })a1 isCropped:(char)a2 version:(long long)a3 isAlwaysFullScreen:(char)a4 formatMode:(long long)a5 thumbnailKind:(long long)a6;
- (unsigned long long)tableFormatBytesPerPixel;

@end
