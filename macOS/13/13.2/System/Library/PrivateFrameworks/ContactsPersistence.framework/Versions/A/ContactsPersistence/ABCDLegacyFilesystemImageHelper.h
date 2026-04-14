@class NSString, NSArray;

@interface ABCDLegacyFilesystemImageHelper : NSObject

@property (readonly) NSString *imagesDirectory;
@property (readonly) NSString *contactIdentifier;
@property (readonly) NSArray *emailAddresses;

+ (id)temporaryImagesDirectory;
+ (BOOL)shouldLogCropRectReadError:(id)a0;

- (void).cxx_destruct;
- (id)initWithImagesDirectory:(id)a0 contactIdentifier:(id)a1 emailAddresses:(id)a2;
- (id)imageDataOfType:(long long)a0;
- (BOOL)hasImageDataOfType:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRect;
- (id)cropRectID;
- (id)cropRectHash;
- (void)removeLargeImage;
- (void)removeThumbnailImage;
- (id)imageURLOfType:(long long)a0;
- (id)imagePathOfType:(long long)a0;
- (id)largeImagePath;
- (id)thumbnailImagePath;
- (id)libraryImageData;
- (id)imageDataInLibrary:(id)a0;

@end
