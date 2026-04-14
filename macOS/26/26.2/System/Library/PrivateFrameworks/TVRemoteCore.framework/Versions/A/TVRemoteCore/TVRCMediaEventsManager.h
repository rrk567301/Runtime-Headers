@class NSSet, NSString, NSMutableSet, TVRCMediaControlSession;

@interface TVRCMediaEventsManager : NSObject <TVRCMediaEventsManaging>

@property (retain, nonatomic) NSSet *volumeCommands;
@property (retain, nonatomic) NSMutableSet *mediaCommands;
@property (retain, nonatomic) TVRCMediaControlSession *mediaSession;
@property (nonatomic) BOOL supportsDirectCaptionQueries;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (nonatomic) int currentSetting;
@property (readonly) NSSet *supportedMediaCommands;
@property (readonly) BOOL volumeSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)activateWithCompletionHandler:(id /* block */)a0;
- (void)sendMediaEvent:(id)a0;
- (int)_captionSettingForButtonEvent:(id)a0;
- (int)_commandForMediaButtonEvent:(id)a0;
- (void)_refreshCaptionState;
- (void)_setupMediaCommands:(unsigned long long)a0;
- (id)initWithCompanionLinkClient:(id)a0 supportsDirectCaptionQueries:(BOOL)a1 eventHandler:(id /* block */)a2;
- (id)supportedCaptionEvents;

@end
