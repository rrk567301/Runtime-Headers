@interface IMAdaptiveImageGlyphPreviewGenerator : IMPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (id)UTITypes;
+ (id)generateAndPersistPreviewFromSourceURL:(id)a0 senderContext:(id)a1 balloonBundleID:(id)a2 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; char x3; char x4; char x5; })a3 outSize:(struct CGSize { double x0; double x1; } *)a4 error:(id *)a5;
+ (char)generatesMetadata;
+ (char)generatesPreview;
+ (char)shouldScaleUpPreview;
+ (char)shouldShadePreview;
+ (char)writesToDisk;

@end
