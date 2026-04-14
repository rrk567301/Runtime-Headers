@class NSString;

@interface HMDAudioStreamInterfaceDataSource : HMFObject <HMFLogging, HMDAudioStreamInterfaceDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isMuted) BOOL muted;

+ (id)logCategory;

- (void)setAudioSessionPropertiesWithShouldAllowSystemSounds:(BOOL)a0 hostProcessBundleIdentifier:(id)a1;

@end
