@protocol ISVitalitySettings;

@interface ISLivePhotoVitalityFilter : NSObject

@property (nonatomic, setter=_setPerformingInputChanges:) BOOL isPerformingInputChanges;
@property (nonatomic, setter=_setShouldUpdateOutput:) BOOL _shouldUpdateOutput;
@property (readonly, nonatomic) id<ISVitalitySettings> settings;
@property (readonly, nonatomic) long long state;
@property (copy, nonatomic) id /* block */ outputChangeHandler;

- (id)initWithSettings:(id)a0;
- (void)setState:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidateOutput;
- (void)performInputChanges:(id /* block */)a0;
- (void)updateOutput;

@end
