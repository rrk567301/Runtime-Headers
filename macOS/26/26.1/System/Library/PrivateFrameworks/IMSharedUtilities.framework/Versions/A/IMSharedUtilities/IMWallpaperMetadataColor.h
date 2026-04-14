@class IMWallpaperMetadataColor_Impl;

@interface IMWallpaperMetadataColor : NSObject <NSSecureCoding> {
    IMWallpaperMetadataColor_Impl *swiftImpl;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
