@class NSURL, NSArray, BRFileObjectID;

@interface BRQueryStitch : NSObject {
    BRFileObjectID *_objid;
    char _kind;
    NSURL *_url;
}

@property (retain, nonatomic) NSURL *fromURL;
@property (retain, nonatomic) NSArray *contexts;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (void)done;
- (void)setQueries:(id)a0;
- (void)_creationDone;
- (void)_deletionDone;
- (void)_enableUpdatesFromIPCAfterStitchingOnAllQueries;
- (void)_renameDone;
- (id)initWithURL:(id)a0 objid:(id)a1 kind:(char)a2;

@end
