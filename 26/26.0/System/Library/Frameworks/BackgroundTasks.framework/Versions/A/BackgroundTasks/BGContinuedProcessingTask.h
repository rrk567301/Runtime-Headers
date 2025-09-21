@class NSString, NSProgress, NSObject;
@protocol OS_os_log;

@interface BGContinuedProcessingTask : BGTask <NSProgressReporting>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (copy, nonatomic, setter=_setProgressHandler:) id /* block */ _progressHandler;
@property (copy, nonatomic, setter=_setDescriptionUpdateHandler:) id /* block */ _descriptionUpdateHandler;
@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)a0 activity:(id)a1;
- (void)updateTitle:(id)a0 subtitle:(id)a1;

@end
