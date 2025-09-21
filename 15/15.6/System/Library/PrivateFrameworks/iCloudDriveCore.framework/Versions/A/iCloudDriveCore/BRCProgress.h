@class BRCAccountSession;

@interface BRCProgress : NSProgress {
    char _ignorePublish;
    BRCAccountSession *_session;
    char _group;
}

@property (readonly, nonatomic) char isPublished;

+ (id)_progressForDocument:(id)a0 group:(char)a1 sizeInfo:(id)a2;
+ (id)uploadProgressForDocument:(id)a0 sizeInfo:(id)a1;

- (void).cxx_destruct;
- (void)setCompletedUnitCount:(long long)a0;
- (void)_setupProgressForDocument:(id)a0 group:(char)a1 sizeInfo:(id)a2;
- (void)_updateToBeProgressForDocument:(id)a0 group:(char)a1 sizeinfo:(id)a2;
- (void)brc_publish;
- (void)brc_unpublish;
- (id)initWithGroup:(char)a0 session:(id)a1;
- (id)initWithIgnorePublish:(char)a0;
- (void)setSession:(id)a0 group:(char)a1;
- (void)updateToBeDownloadProgressForDocument:(id)a0 sizeInfo:(id)a1;

@end
