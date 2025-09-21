@class NSString, IMWallpaperMetadata, IMWallpaper_SwiftImpl;

@interface IMWallpaper : NSObject <NSSecureCoding> {
    IMWallpaper_SwiftImpl *swiftImpl;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *fileName;
@property (readonly, copy, nonatomic) NSString *filePath;
@property (readonly, copy, nonatomic) NSString *lowResFileName;
@property (readonly, copy, nonatomic) NSString *lowResFilePath;
@property (readonly, nonatomic) long long dataVersion;
@property (readonly, nonatomic) char wallpaperExists;
@property (readonly, nonatomic) char lowResWallpaperExists;
@property (readonly, nonatomic) IMWallpaperMetadata *metadata;
@property (readonly, nonatomic) char contentIsSensitive;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)lowResWallpaperData;
- (id)wallpaperData;
- (id)initWithFileName:(id)a0 filePath:(id)a1 data:(id)a2 lowResFileName:(id)a3 lowResFilePath:(id)a4 lowResData:(id)a5 metadata:(id)a6 contentIsSensitive:(char)a7 error:(id *)a8;
- (id)initWithFileName:(id)a0 filePath:(id)a1 lowResFileName:(id)a2 lowResFilePath:(id)a3 metadata:(id)a4 contentIsSensitive:(char)a5;
- (id)publicDictionaryRepresentation;

@end
