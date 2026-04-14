@interface IMMoviePreviewGenerator : IMPreviewGenerator

+ (id)_imageNamed:(id)a0;
+ (double)_balloonMaskTailWidth;
+ (Class)NSImageSymbolConfigurationClass;
+ (double)fontWeightRegular;
+ (Class)NSImageClass;
+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_minimumPlayButtonInsets;
+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_thumbnailContentAlignmentInsetsForOrientation:(BOOL)a0;
+ (id)playButtonPreviewForNSImage:(id)a0 contentAlignmentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1;
+ (struct CGImage { } *)playButtonPreviewForCGImage:(struct CGImage { } *)a0 scale:(double)a1 isFromMe:(BOOL)a2;
+ (BOOL)writesToDisk;
+ (struct CGImage { } *)createImageWithPlayButtonOverlay:(struct CGImage { } *)a0 scale:(double)a1 transferGUID:(id)a2 error:(id *)a3;
+ (id)fetchUTITypes;
+ (id)UTITypes;
+ (BOOL)isAutoloopAsset:(id)a0;
+ (Class)NSGraphicsContextClass;
+ (id)generateAndPersistPreviewFromSourceURL:(id)a0 balloonBundleID:(id)a1 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a2 outSize:(struct CGSize { double x0; double x1; } *)a3 error:(id *)a4;
+ (id)_avAssetForURL:(id)a0;

@end
