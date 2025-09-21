@class NSString;
@protocol MPVolumeControllerDataSource, MPVolumeControllerDelegate;

@interface MPVolumeController : NSObject <MPVolumeControllerDataSourceDelegate> {
    int _volumeChangeCoalescingCount;
}

@property (weak, nonatomic) id<MPVolumeControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isVolumeControlAvailable) char volumeControlAvailable;
@property (readonly, nonatomic) unsigned int volumeCapabilities;
@property (readonly, copy, nonatomic) NSString *volumeControlLabel;
@property (copy, nonatomic) NSString *volumeAudioCategory;
@property (nonatomic) float volumeValue;
@property (nonatomic, getter=isMuted) char muted;
@property (retain, nonatomic) id<MPVolumeControllerDataSource> dataSource;
@property (readonly, nonatomic) char volumeWarningEnabled;
@property (readonly, nonatomic) long long volumeWarningState;
@property (readonly, nonatomic) float EUVolumeLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptionForWarningState:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (char)muted;
- (void)adjustVolumeValue:(float)a0;
- (void)beginDecreasingRelativeVolume;
- (void)beginIncreasingRelativeVolume;
- (void)decreaseVolume;
- (void)endDecreasingRelativeVolume;
- (void)endIncreasingRelativeVolume;
- (void)getVolumeValueWithCompletion:(id /* block */)a0;
- (void)increaseVolume;
- (void)setVolume:(float)a0 withNoticationDelay:(float)a1;
- (void)setVolume:(float)a0 withNotificationDelay:(float)a1;
- (void)updateVolumeValue;
- (void)updateVolumeWarningState;
- (void)volumeControllerDataSource:(id)a0 didChangeMuted:(char)a1;
- (void)volumeControllerDataSource:(id)a0 didChangeVolume:(float)a1;
- (void)volumeControllerDataSource:(id)a0 didChangeVolume:(float)a1 silenceVolumeHUD:(char)a2;
- (void)volumeControllerDataSource:(id)a0 didChangeVolumeAudioCategory:(id)a1;
- (void)volumeControllerDataSource:(id)a0 didChangeVolumeCapabilities:(unsigned int)a1;
- (void)volumeControllerDataSource:(id)a0 didChangeVolumeControlAvailability:(char)a1;
- (void)volumeControllerDataSource:(id)a0 didChangeVolumeLabel:(id)a1;

@end
