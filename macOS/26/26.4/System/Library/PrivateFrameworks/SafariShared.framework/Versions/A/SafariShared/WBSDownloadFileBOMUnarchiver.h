@interface WBSDownloadFileBOMUnarchiver : WBSDownloadFileUnarchiver

@property (nonatomic) struct _BOMCopier { } *copier;

- (id)_extractionOptionsForURL:(id)a0;
- (void)_unarchiveFileWithSubpath:(id)a0 inDirectoryWithFileHandle:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)canInterruptUnarchiving;
- (void)interruptUnarchiving;

@end
