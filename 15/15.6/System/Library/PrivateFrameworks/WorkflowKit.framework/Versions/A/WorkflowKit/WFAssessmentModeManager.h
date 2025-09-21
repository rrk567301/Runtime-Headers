@class AEAssessmentModeGestalt, NSObject;
@protocol OS_dispatch_queue, WFAssessmentModeManagerDelegate;

@interface WFAssessmentModeManager : NSObject

@property (readonly, nonatomic) AEAssessmentModeGestalt *assessmentGestalt;
@property (nonatomic) char isObserving;
@property (weak, nonatomic) id<WFAssessmentModeManagerDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } isObservingLock;

+ (char)isAssessmentModeSupportedOnCurrentDevice;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (char)isInAssessmentMode;
- (void)startObservingForAssesmentModeChangesIfNeeded;

@end
