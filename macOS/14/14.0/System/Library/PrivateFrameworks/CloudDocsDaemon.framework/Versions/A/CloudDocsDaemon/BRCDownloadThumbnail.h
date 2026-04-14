@interface BRCDownloadThumbnail : BRCDownload

- (id)description;
- (int)kind;
- (BOOL)_stageWithSession:(id)a0 error:(id *)a1;
- (id)initWithDocument:(id)a0 stageID:(id)a1 etag:(id)a2;

@end
