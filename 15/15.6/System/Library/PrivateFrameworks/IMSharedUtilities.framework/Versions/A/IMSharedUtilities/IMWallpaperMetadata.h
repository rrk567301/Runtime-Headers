@class NSString, NSDictionary, IMWallpaperMetadata_Impl;

@interface IMWallpaperMetadata : NSObject <NSSecureCoding> {
    IMWallpaperMetadata_Impl *swiftImpl;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) double fontSize;
@property (readonly, nonatomic) double fontWeight;
@property (readonly, nonatomic) NSDictionary *fontColor;
@property (readonly, nonatomic) char isVertical;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSDictionary *backgroundColor;

+ (id)wallpaperExtensionIdentifierFromType:(long long)a0;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithFontName:(id)a0 fontSize:(double)a1 fontWeight:(double)a2 fontColor:(id)a3 isVertical:(char)a4 type:(id)a5 backgroundColor:(id)a6;

@end
