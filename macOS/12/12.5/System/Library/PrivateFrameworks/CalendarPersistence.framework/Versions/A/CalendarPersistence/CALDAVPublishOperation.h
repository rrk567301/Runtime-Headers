@class CalDAVBasicAccountInfoProvider, NSString, NSError, CalCalDAVTaskManager;

@interface CALDAVPublishOperation : CALURLPublishOperation <CoreDAVTaskDelegate> {
    NSString *_etag;
}

@property (retain) CalCalDAVTaskManager *taskManager;
@property (retain) CalDAVBasicAccountInfoProvider *accountInfoProvider;
@property (retain) NSError *taskError;
@property BOOL taskInProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canHandleURL:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setEtag:(id)a0;
- (void)performTask:(id)a0;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (void)publishData:(id)a0 automatic:(BOOL)a1;
- (void)abortOperation;
- (id)initWithPublisher:(id)a0 withURL:(id)a1;
- (void)unpublishDataWithAutomatic:(BOOL)a0;
- (BOOL)_checkCompatilityModeWithOldURL:(id *)a0;
- (void)setInfoWithNilCheck:(id)a0 forKey:(id)a1;

@end
