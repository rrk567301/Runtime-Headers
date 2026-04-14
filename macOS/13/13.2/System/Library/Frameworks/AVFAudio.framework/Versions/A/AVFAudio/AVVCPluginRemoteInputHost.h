@class AVVoiceController, NSMutableArray;
@protocol AVAudioRemoteInputPlugin;

@interface AVVCPluginRemoteInputHost : NSObject <AVAudioRemoteInputPluginDelegate> {
    NSMutableArray<AVAudioRemoteInputPlugin> *mPlugins;
}

@property (weak, nonatomic) AVVoiceController *mMotherController;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)allBundles:(id *)a0;
- (id)mockPluginEndpoint;
- (void)inputPlugin:(id)a0 didPublishDevice:(id)a1;
- (void)inputPlugin:(id)a0 didUnpublishDevice:(id)a1;
- (void)invalidatePlugins;
- (id)findDeviceWithIdentifier:(id)a0;
- (id)findFirstBluetoothDevice;
- (void)setParentVoiceController:(id)a0;

@end
