@class NSArray, ISServiceProxy;

@interface CKRestoreDownloadsRequest : SSRequest {
    NSArray *_archivedFiles;
    ISServiceProxy *_serviceProxy;
}

@property char userInitiated;

- (void).cxx_destruct;
- (id)initWithArchivedFiles:(id)a0;
- (char)issueRequestForIdentifier:(id)a0 error:(id *)a1;

@end
