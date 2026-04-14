@class NSCountedSet, NSMutableSet;
@protocol WBSTranslationErrorControllerDelegate;

@interface WBSTranslationErrorController : NSObject {
    NSCountedSet *_errorCounter;
    NSMutableSet *_errorKeysReachingThreshold;
}

@property (weak, nonatomic) id<WBSTranslationErrorControllerDelegate> delegate;

- (void)invalidate;
- (void).cxx_destruct;
- (id)init;
- (void)addError:(id)a0;
- (id)_overriddenThresholdForError:(id)a0;

@end
