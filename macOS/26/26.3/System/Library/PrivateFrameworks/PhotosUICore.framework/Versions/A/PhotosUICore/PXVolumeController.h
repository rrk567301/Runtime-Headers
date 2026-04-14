@interface PXVolumeController : PXObservable <PXMutableVolumeController>

@property (readonly, nonatomic) BOOL isInSilentMode;

- (void)performChanges:(id /* block */)a0;
- (id)init;
- (void)decreaseVolume;
- (void)increaseVolume;
- (id)initWithIsInSilentMode:(BOOL)a0;
- (void)setIsInSilentMode:(BOOL)a0;

@end
