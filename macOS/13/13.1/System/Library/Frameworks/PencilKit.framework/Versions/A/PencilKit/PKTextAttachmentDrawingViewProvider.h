@interface PKTextAttachmentDrawingViewProvider : NSTextAttachmentViewProvider

+ (BOOL)isSystemNoteTakingEnabled;
+ (void)registerViewProviderClassIfNecessary;
+ (Class)drawingClassForFileType:(id)a0;
+ (Class)drawingViewClassForDrawingClass:(Class)a0;

- (void)loadView;

@end
