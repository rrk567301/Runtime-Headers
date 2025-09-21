@class NSString, NSDictionary;

@interface PKPaper : NSObject <PKPropertyVisitable, NSCopying, NSSecureCoding, PKUserCodable> {
    NSString *_name;
    NSString *_cachedBaseName;
    int _width;
    int _height;
    int _leftMargin;
    int _topMargin;
    int _rightMargin;
    int _bottomMargin;
    NSDictionary *_mediaInfo;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *localizedName;
@property (readonly) NSString *mediaTypeName;
@property (readonly) char isRoll;
@property (readonly) struct CGSize { double x0; double x1; } paperSize;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageableAreaRect;
@property (readonly) unsigned long long topMarginInPoints;
@property (readonly) unsigned long long bottomMarginInPoints;
@property (readonly) unsigned long long minCutLength;
@property (readonly) unsigned long long maxCutLength;
@property (readonly) NSDictionary *mediaInfo;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generic4x6Paper;
+ (char)willAdjustMarginsForDuplexMode:(id)a0;
+ (id)defaultGenericPaperForLocale:(id)a0;
+ (id)documentPapers;
+ (id)generic3_5x5Paper;
+ (id)genericA4Paper;
+ (id)genericA6Paper;
+ (id)genericBorderlessWithName:(id)a0;
+ (id)genericHagakiPaper;
+ (id)genericLegalPaper;
+ (id)genericLetterPaper;
+ (id)genericPRC32KPaper;
+ (id)genericWithName:(id)a0;
+ (id)mediaNameForWidth:(int)a0 Height:(int)a1 mediaType:(id)a2 Borderless:(char)a3 Simplex:(char)a4;
+ (id)mediaNameForWidth:(int)a0 height:(int)a1 borderless:(char)a2 simplex:(char)a3;
+ (id)paperWithAttributes:(id)a0;
+ (id)photoPapers;
+ (char)useMetric;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedName;
- (int)bottomMargin;
- (int)leftMargin;
- (int)minHeight;
- (int)rightMargin;
- (int)topMargin;
- (id)mediaType;
- (int)maxHeight;
- (id)baseName;
- (id)cutToPWGLength:(int)a0;
- (void)addToMediaCol:(id)a0;
- (unsigned long long)bottomMarginInPoints;
- (id)createMediaColAndDoMargins:(char)a0;
- (id)cutToLength:(double)a0;
- (double)imageableArea;
- (id)initWithUserCodableDictionary:(id)a0;
- (id)initWithWidth:(int)a0 Height:(int)a1 Left:(int)a2 Top:(int)a3 Right:(int)a4 Bottom:(int)a5 localizedName:(id)a6 codeName:(id)a7 mediaInfo:(id)a8;
- (char)isBorderless;
- (char)isEqualSize:(id)a0;
- (char)isEqualSizeAndMediaType:(id)a0;
- (char)isRoll;
- (id)localizedNameFromDimensions;
- (unsigned long long)maxCutLength;
- (id)mediaTypeName;
- (unsigned long long)minCutLength;
- (id)nameWithoutSuffixes:(id)a0;
- (id)paperWithMarginsAdjustedForDuplexMode:(id)a0;
- (long long)sizeAndImageableCompare:(id)a0;
- (long long)sizeMediaTypeAndImageableCompare:(id)a0;
- (unsigned long long)topMarginInPoints;
- (id)userCodableDictionary;
- (void)visitProperties:(struct Visitor { void /* function */ **x0; } *)a0;

@end
