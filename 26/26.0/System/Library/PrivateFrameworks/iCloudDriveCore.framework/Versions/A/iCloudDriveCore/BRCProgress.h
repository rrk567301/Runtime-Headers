@class BRCAccountSession;

@interface BRCProgress : NSProgress {
    BOOL _ignorePublish;
    BRCAccountSession *_session;
    char _group;
}

@property (readonly, nonatomic) BOOL isPublished;

+ (id)_progressForDocument:(id)a0 group:(char)a1 totalUnitCount:(long long)a2 completedUnitCount:(long long)a3;
+ (id)progressToReplaceUploadProgress:(id)a0;
+ (id)uploadProgressForDocument:(id)a0 totalUnitCount:(long long)a1 completedUnitCount:(long long)a2;

- (void)setCompletedUnitCount:(long long)a0;
- (void).cxx_destruct;
- (void)_setupDownloadProgressForDocument:(id)a0 totalUnitCount:(long long)a1 completedUnitCount:(long long)a2;
- (void)_setupProgressForDocument:(id)a0 group:(char)a1 totalUnitCount:(long long)a2 completedUnitCount:(long long)a3;
- (void)_setupUploadProgressForDocumentWithName:(id)a0 totalUnitCount:(long long)a1 completedUnitCount:(long long)a2 fileObjectID:(id)a3;
- (void)_updateToBeProgressForDocument:(id)a0 group:(char)a1 totalUnitCount:(long long)a2 completedUnitCount:(long long)a3;
- (void)brc_publish;
- (void)brc_unpublish;
- (id)initWithGroup:(char)a0 session:(id)a1;
- (id)initWithIgnorePublish:(BOOL)a0;
- (void)setSession:(id)a0 group:(char)a1;
- (void)updateToBeDownloadProgressForDocument:(id)a0 totalUnitCount:(long long)a1 completedUnitCount:(long long)a2;

@end
