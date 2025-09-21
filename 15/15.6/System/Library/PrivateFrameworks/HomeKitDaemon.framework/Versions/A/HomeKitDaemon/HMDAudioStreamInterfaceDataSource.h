@class NSString;

@interface HMDAudioStreamInterfaceDataSource : HMFObject <HMFLogging, HMDAudioStreamInterfaceDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) char usesGlobalMuting;
@property (getter=isMuted) char muted;
@property (readonly) char supportsPHASE;

+ (id)logCategory;

- (void)createPHASEEngineAndControllerForStreamToken:(long long)a0 completion:(id /* block */)a1;
- (void)setAudioSessionPropertiesWithShouldAllowSystemSounds:(char)a0 hostProcessBundleIdentifier:(id)a1;

@end
