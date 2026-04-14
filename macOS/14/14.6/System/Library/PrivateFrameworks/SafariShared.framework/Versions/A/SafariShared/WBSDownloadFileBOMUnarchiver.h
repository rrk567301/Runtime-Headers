@interface WBSDownloadFileBOMUnarchiver : WBSDownloadFileUnarchiver

@property (nonatomic) struct _BOMCopier { } *copier;

- (BOOL)canInterruptUnarchiving;
- (void)interruptUnarchiving;
- (id)optionsForExtraction;
- (void)unarchive;

@end
