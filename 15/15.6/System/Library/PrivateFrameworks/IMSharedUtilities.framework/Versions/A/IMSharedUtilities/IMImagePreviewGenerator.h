@interface IMImagePreviewGenerator : IMPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (id)UTITypes;
+ (char)_getUncroppedSizeForImageAtURL:(id)a0 scale:(double)a1 withImageSizeInPx:(struct CGSize { double x0; double x1; })a2 maximumSizeInPx:(struct CGSize { double x0; double x1; })a3 minimumSizeInPx:(struct CGSize { double x0; double x1; })a4 previewSize:(struct CGSize { double x0; double x1; } *)a5 senderContext:(id)a6;
+ (struct CGImage { } *)_newBlastdoorPreviewForFileAtURL:(id)a0 senderContext:(id)a1 maxPxWidth:(double)a2 scale:(double)a3 isScreenshot:(char *)a4 isMonoskiAsset:(char *)a5 stickerEffect:(id *)a6 error:(id *)a7;
+ (struct CGImage { } *)_newCroppedAndScaledImageWithImageSource:(struct CGImageSource { } *)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; char x3; char x4; char x5; })a1;
+ (id)generateAndPersistPreviewFromSourceURL:(id)a0 senderContext:(id)a1 balloonBundleID:(id)a2 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; char x3; char x4; char x5; })a3 outSize:(struct CGSize { double x0; double x1; } *)a4 error:(id *)a5;
+ (struct CGImage { } *)newPreviewFromSourceURL:(id)a0 senderContext:(id)a1 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; char x3; char x4; char x5; })a2 error:(id *)a3;
+ (struct CGImage { } *)newThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 imagePxSize:(struct CGSize { double x0; double x1; })a1 imageSource:(struct CGImageSource { } *)a2 scale:(double)a3;
+ (char)writesToDisk;

@end
