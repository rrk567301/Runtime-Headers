@interface PXVolumeController : PXObservable <PXMutableVolumeController>

@property (readonly, nonatomic) char isInSilentMode;

- (id)init;
- (void)decreaseVolume;
- (void)increaseVolume;
- (void)performChanges:(id /* block */)a0;
- (id)initWithIsInSilentMode:(char)a0;
- (void)setIsInSilentMode:(char)a0;

@end
