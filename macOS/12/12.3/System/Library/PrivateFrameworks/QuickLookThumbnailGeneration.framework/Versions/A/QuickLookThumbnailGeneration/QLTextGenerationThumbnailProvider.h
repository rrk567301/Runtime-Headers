@interface QLTextGenerationThumbnailProvider : QLThumbnailProvider

+ (int)flavorNumberFromBase:(int)a0 forThumbnailRequest:(id)a1;
+ (struct CGSize { double x0; double x1; })_thumbnailContextSizeForImageSize:(struct CGSize { double x0; double x1; })a0 withMaxSize:(struct CGSize { double x0; double x1; })a1;

- (void)provideThumbnailForFileRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)_replyWithRequest:(id)a0 textStorage:(id)a1 documentAttributes:(id)a2 contentTypeUTI:(id)a3 imageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 textRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;

@end
