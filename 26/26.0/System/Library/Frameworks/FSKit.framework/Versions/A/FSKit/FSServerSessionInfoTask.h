@class FSServerSessionInfo;

@interface FSServerSessionInfoTask : FSTask

@property (retain) FSServerSessionInfo *result;

- (void).cxx_destruct;
- (void)didCompleteWithServerSessionInfo:(id)a0;

@end
