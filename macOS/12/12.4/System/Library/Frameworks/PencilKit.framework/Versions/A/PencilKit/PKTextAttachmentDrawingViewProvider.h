@interface PKTextAttachmentDrawingViewProvider : NSTextAttachmentViewProvider

+ (void)registerViewProviderClassIfNecessary;
+ (Class)drawingClassForFileType:(id)a0;
+ (Class)drawingViewClassForDrawingClass:(Class)a0;
+ (void)didInsertDrawingAttachment:(id)a0;
+ (BOOL)isSystemNoteTakingEnabled;

- (void)loadView;

@end
