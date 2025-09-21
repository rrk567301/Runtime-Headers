@class NSString, NSImage, NSSecurityScopedURLWrapper, NSDate, NSNumber, GPGenerationRecipeData;

@interface GPExportablePhotoAsset : NSObject <NSSecureCoding> {
    void /* function */ _identifier;
    void /* function */ _imageURLWrapper;
    void /* function */ _previewImage;
    void /* function */ _creationDate;
    void /* function */ _recipeData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) id _identifier;
@property (nonatomic, readonly) NSSecurityScopedURLWrapper *imageURLWrapper;
@property (nonatomic, readonly) id _imageURLWrapper;
@property (nonatomic, readonly) NSImage *previewImage;
@property (nonatomic, readonly) id _previewImage;
@property (nonatomic, readonly) NSNumber *pixelWidth;
@property (nonatomic, readonly) NSNumber *pixelHeight;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) id _creationDate;
@property (nonatomic, readonly) GPGenerationRecipeData *recipeData;
@property (nonatomic, readonly) id _recipeData;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 imageURLWrapper:(id)a1 previewImage:(id)a2 pixelWidth:(id)a3 pixelHeight:(id)a4 creationDate:(id)a5 recipeData:(id)a6;

@end
