@interface IMMoviePreviewGenerator : IMPreviewGenerator

+ (id)_imageNamed:(id)a0;
+ (id)_avAssetForURL:(id)a0;
+ (Class)NSImageClass;
+ (Class)NSImageSymbolConfigurationClass;
+ (Class)NSGraphicsContextClass;
+ (id)UTITypes;
+ (double)_balloonMaskTailWidth;
+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_minimumPlayButtonInsets;
+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_thumbnailContentAlignmentInsetsForOrientation:(BOOL)a0;
+ (id)fetchUTITypes;
+ (double)fontWeightRegular;
+ (id)generateAndPersistPreviewFromSourceURL:(id)a0 balloonBundleID:(id)a1 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a2 outSize:(struct CGSize { double x0; double x1; } *)a3 error:(id *)a4;
+ (BOOL)isAutoloopAsset:(id)a0;
+ (struct CGImage { } *)newImageWithPlayButtonOverlay:(struct CGImage { } *)a0 scale:(double)a1 transferGUID:(id)a2 error:(id *)a3;
+ (struct CGImage { } *)playButtonPreviewForCGImage:(struct CGImage { } *)a0 scale:(double)a1 isFromMe:(BOOL)a2;
+ (id)playButtonPreviewForNSImage:(id)a0 contentAlignmentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1;
+ (BOOL)writesToDisk;

@end
