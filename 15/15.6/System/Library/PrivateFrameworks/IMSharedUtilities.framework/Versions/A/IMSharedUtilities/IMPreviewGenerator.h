@interface IMPreviewGenerator : NSObject <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (char)validPreviewExistsAtPreviewURL:(id)a0;
+ (id)UTITypes;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scaledTargetRectForSize:(struct CGSize { double x0; double x1; })a0 andThumbnailSize:(struct CGSize { double x0; double x1; })a1;
+ (id)generateAndPersistMetadataFromSourceURL:(id)a0 senderContext:(id)a1 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; char x3; char x4; char x5; })a2 error:(id *)a3;
+ (id)generateAndPersistPreviewFromSourceURL:(id)a0 senderContext:(id)a1 balloonBundleID:(id)a2 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; char x3; char x4; char x5; })a3 outSize:(struct CGSize { double x0; double x1; } *)a4 error:(id *)a5;
+ (char)generatesMetadata;
+ (char)generatesPreview;
+ (double)maxUpScale;
+ (id)metadataExtension;
+ (struct CGImage { } *)newCroppedAndRescaledImageFromImage:(struct CGImage { } *)a0 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; char x3; char x4; char x5; })a1 targetPxSize:(struct CGSize { double x0; double x1; })a2;
+ (struct CGImage { } *)newPreviewFromSourceURL:(id)a0 senderContext:(id)a1 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; char x3; char x4; char x5; })a2 error:(id *)a3;
+ (id)previewExtension;
+ (char)shouldScaleUpPreview;
+ (char)shouldShadePreview;
+ (struct CGSize { double x0; double x1; })thumbnailFillSizeForWidth:(double)a0 imageSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
+ (char)writesToDisk;

@end
