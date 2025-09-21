@class NSString, NSDictionary, IMWallpaperMetadata_Impl;

@interface IMWallpaperMetadata : NSObject <NSSecureCoding> {
    IMWallpaperMetadata_Impl *swiftImpl;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) double fontSize;
@property (readonly, nonatomic) double fontWeight;
@property (readonly, nonatomic) NSDictionary *fontColor;
@property (readonly, nonatomic) BOOL isVertical;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSDictionary *backgroundColor;

+ (id)wallpaperExtensionIdentifierFromType:(long long)a0;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFontName:(id)a0 fontSize:(double)a1 fontWeight:(double)a2 fontColor:(id)a3 isVertical:(BOOL)a4 type:(id)a5 backgroundColor:(id)a6;

@end
