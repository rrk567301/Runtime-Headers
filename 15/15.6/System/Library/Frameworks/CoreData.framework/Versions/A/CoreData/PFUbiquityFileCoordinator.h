@class NSString;

@interface PFUbiquityFileCoordinator : NSFileCoordinator {
    NSString *_localPeerID;
}

- (void)dealloc;
- (id)initWithFilePresenter:(id)a0;
- (char)shouldRetryForError:(id)a0 ignoreFile:(char *)a1;

@end
