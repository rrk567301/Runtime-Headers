@interface WBSDownloadFileBOMUnarchiver : WBSDownloadFileUnarchiver

@property (nonatomic) struct _BOMCopier { } *copier;

- (void)unarchive;
- (BOOL)canInterruptUnarchiving;
- (void)interruptUnarchiving;
- (id)optionsForExtraction;

@end
