@interface IMWatchfacePreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (id)UTITypes;
+ (char)_isAvailable;
+ (char)decorateWatchfacePreview:(id)a0 andWriteToURL:(id)a1 imagePxSize:(struct CGSize { double x0; double x1; } *)a2;
+ (id)generateAndPersistPreviewFromSourceURL:(id)a0 senderContext:(id)a1 balloonBundleID:(id)a2 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; char x3; char x4; char x5; })a3 outSize:(struct CGSize { double x0; double x1; } *)a4 error:(id *)a5;
+ (char)writesToDisk;

@end
