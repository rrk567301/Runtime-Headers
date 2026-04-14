@class BRCAccountSession;

@interface BRCProgress : NSProgress {
    BOOL _ignorePublish;
}

@property (readonly, weak, nonatomic) BRCAccountSession *session;
@property (readonly, nonatomic) char group;
@property (readonly, nonatomic) BOOL isPublished;

- (void).cxx_destruct;
- (id)init;
- (void)_setupDownloadProgressForDocument:(id)a0 totalUnitCount:(long long)a1 completedUnitCount:(long long)a2;
- (BOOL)_setupProgressForDocument:(id)a0 group:(char)a1 totalUnitCount:(long long)a2 completedUnitCount:(long long)a3;
- (void)_setupUploadProgressForDocumentWithName:(id)a0 totalUnitCount:(long long)a1 completedUnitCount:(long long)a2 fileObjectID:(id)a3;
- (void)brc_publish;
- (void)brc_unpublish;
- (id)initUploadProgressForDocument:(id)a0 totalUnitCount:(long long)a1 completedUnitCount:(long long)a2;
- (id)initWithIgnorePublish:(BOOL)a0;
- (id)initWithUploadProgress:(id)a0;
- (void)updateToBeDownloadProgressForDocument:(id)a0 totalUnitCount:(long long)a1 completedUnitCount:(long long)a2;

@end
