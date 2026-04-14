@class NSString;

@interface OCCancel : NSObject <TCCancelDelegate> {
    BOOL mIsCancelled;
    BOOL mIsQuit;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isCancelled;
- (void)quit;
- (void)cancel;
- (id)init;
- (BOOL)isQuit;

@end
