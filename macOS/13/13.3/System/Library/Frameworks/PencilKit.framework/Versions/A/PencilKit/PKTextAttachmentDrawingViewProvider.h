@interface PKTextAttachmentDrawingViewProvider : NSTextAttachmentViewProvider

+ (Class)drawingClassForFileType:(id)a0;
+ (Class)drawingViewClassForDrawingClass:(Class)a0;
+ (BOOL)isSystemNoteTakingEnabled;
+ (void)registerViewProviderClassIfNecessary;

- (void)loadView;

@end
