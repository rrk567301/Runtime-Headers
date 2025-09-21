@class NSString;

@interface OCCancel : NSObject <TCCancelDelegate> {
    char mIsCancelled;
    char mIsQuit;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)cancel;
- (char)isCancelled;
- (void)quit;
- (char)isQuit;

@end
