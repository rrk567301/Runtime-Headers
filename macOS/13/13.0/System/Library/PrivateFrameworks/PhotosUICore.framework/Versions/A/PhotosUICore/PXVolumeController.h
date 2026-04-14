@interface PXVolumeController : PXObservable <PXMutableVolumeController>

@property (readonly, nonatomic) BOOL isInSilentMode;

- (id)init;
- (void)increaseVolume;
- (void)decreaseVolume;
- (void)performChanges:(id /* block */)a0;
- (void)setIsInSilentMode:(BOOL)a0;
- (id)initWithIsInSilentMode:(BOOL)a0;

@end
