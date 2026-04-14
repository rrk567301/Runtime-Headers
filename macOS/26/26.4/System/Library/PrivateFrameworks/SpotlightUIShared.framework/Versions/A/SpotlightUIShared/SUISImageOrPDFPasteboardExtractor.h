@interface SUISImageOrPDFPasteboardExtractor : SUISPasteboardExtractor

+ (BOOL)copyFile:(id)a0 toDestination:(id)a1;
+ (BOOL)isImageOrPDFThatIsNotPromised:(id)a0 type:(id)a1;
+ (void)modifyAttributeSet:(id)a0 withPasteboard:(id)a1;
+ (BOOL)supportsPasteboardItems:(id)a0;
+ (id)uniqueFilePathForDirectory:(id)a0 withFileName:(id)a1;

@end
