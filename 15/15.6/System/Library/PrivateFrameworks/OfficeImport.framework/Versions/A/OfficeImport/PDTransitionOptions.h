@class NSString;

@interface PDTransitionOptions : NSObject {
    char mHasSound;
    char mIsStartSoundAction;
    NSString *mSoundFile;
}

- (id)description;
- (void).cxx_destruct;

@end
