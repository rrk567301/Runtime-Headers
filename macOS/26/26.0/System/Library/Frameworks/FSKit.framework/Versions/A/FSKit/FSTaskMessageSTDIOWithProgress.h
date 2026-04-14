@class NSProgress, NSError, NSObject;
@protocol OS_dispatch_group;

@interface FSTaskMessageSTDIOWithProgress : NSObject <FSTaskMessageOperations> {
    char *progress_buffer;
    int screen_width;
    NSProgress *_progress;
}

@property BOOL progressShowing;
@property BOOL progressHasShown;
@property int twiddleState;
@property (retain) NSObject<OS_dispatch_group> *dispatch_group;
@property (retain, nonatomic) NSProgress *progress;
@property (copy) NSError *completedError;

- (void)dealloc;
- (void)logMessage:(id)a0;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)hideProgress;
- (void)showProgress;
- (void)completed:(id)a0 replyHandler:(id /* block */)a1;
- (void)drawTwiddleBar;
- (void)fillProgressBar:(float)a0;
- (void)hideProgressLocked;
- (int)printAboveProgress:(const char *)a0;
- (void)prompt:(id)a0 replyHandler:(id /* block */)a1;
- (void)promptTrueFalse:(id)a0 replyHandler:(id /* block */)a1;
- (void)showProgressLocked;

@end
