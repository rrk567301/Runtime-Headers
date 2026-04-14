@interface QLTextThumbnailRenderer : NSObject

+ (id)textEditDefaultForKey:(id)a0 class:(Class)a1;
+ (id)defaultTextAttributes:(BOOL)a0;
+ (id)_loadingOptionsForUTI:(id)a0;
+ (id)textStorageWithURL:(id)a0 contentType:(id)a1 stringEncoding:(unsigned long long)a2 documentAttributes:(id *)a3 truncationMode:(long long)a4;
+ (id)textStorageWithData:(id)a0 contentType:(id)a1 stringEncoding:(unsigned long long)a2 documentAttributes:(id *)a3 truncationMode:(long long)a4;
+ (struct CGSize { double x0; double x1; })_thumbnailImageSizeMaxSize:(struct CGSize { double x0; double x1; })a0 withTextStorage:(id)a1 proposedSize:(struct CGSize { double x0; double x1; })a2 documentAttributes:(id)a3 proposedRatio:(double)a4 forIcon:(BOOL)a5 outTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a6;
+ (void)_generateThumbnailWithTextStorage:(id)a0 documentAttributes:(id)a1 imageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 textRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 rich:(BOOL)a4 inContext:(struct CGContext { } *)a5;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectWithData:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1 stringEncoding:(unsigned long long)a2 contentType:(id)a3 forIcon:(BOOL)a4 documentAttributes:(id *)a5 textStorage:(id *)a6 textRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a7;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectWithURL:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1 stringEncoding:(unsigned long long)a2 contentType:(id)a3 forIcon:(BOOL)a4 documentAttributes:(id *)a5 textStorage:(id *)a6 textRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a7;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_imageRectWithTextStorage:(id)a0 documentAttributes:(id)a1 maxSize:(struct CGSize { double x0; double x1; })a2 forIcon:(BOOL)a3 textRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;
+ (void)generateThumbnailWithTextStorage:(id)a0 documentAttributes:(id)a1 contentType:(id)a2 imageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 textRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 context:(struct CGContext { } *)a5;

@end
