@class WFFileType, WFImage;

@interface WFImageContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (retain, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) WFImage *image;
@property (readonly, nonatomic) BOOL imageIsAnimated;
@property (nonatomic) BOOL isScreenshot;

+ (BOOL)supportsSecureCoding;
+ (id)typeDescription;
+ (id)imageTypes;
+ (id)ownedTypes;
+ (id)ownedPasteboardTypes;
+ (id)itemWithSerializedItem:(id)a0 forType:(id)a1 named:(id)a2 attributionSet:(id)a3 cachingIdentifier:(id)a4;
+ (id)outputTypes;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)itemWithImage:(id)a0 named:(id)a1 preferredFileType:(id)a2;
+ (id)itemWithFile:(id)a0 preferredFileType:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)location;
- (id)width;
- (id)height;
- (id)orientation;
- (id)model;
- (id)metadata;
- (id)make;
- (BOOL)isContent;
- (id)imageFile;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (id)preferredObjectType;
- (void)copyStateToItem:(id)a0;
- (BOOL)isObjectBacked;
- (id)generateImageFileForType:(id)a0 includingMetadata:(BOOL)a1 compressionQuality:(id)a2 error:(id *)a3;
- (id)dateTaken;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListAltText:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;

@end
