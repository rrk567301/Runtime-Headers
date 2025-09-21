@class NSString, IMWallpaperMetadataColor_Impl, NSDictionary;

@interface IMWallpaperMetadata_Impl : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ fontNameKey;
    void /* unknown type, empty encoding */ fontSizeKey;
    void /* unknown type, empty encoding */ fontWeightKey;
    void /* unknown type, empty encoding */ fontColorKey;
    void /* unknown type, empty encoding */ isVerticalKey;
    void /* unknown type, empty encoding */ typeKey;
    void /* unknown type, empty encoding */ backgroundColorKey;
    void /* function */ fontName;
    void /* function */ type;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) double fontSize;
@property (nonatomic, readonly) double fontWeight;
@property (nonatomic, retain) IMWallpaperMetadataColor_Impl *fontColor;
@property (nonatomic, readonly) BOOL isVertical;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, retain) IMWallpaperMetadataColor_Impl *backgroundColor;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFontName:(id)a0 fontSize:(double)a1 fontWeight:(double)a2 fontColor:(id)a3 isVertical:(BOOL)a4 type:(id)a5 backgroundColor:(id)a6;

@end
