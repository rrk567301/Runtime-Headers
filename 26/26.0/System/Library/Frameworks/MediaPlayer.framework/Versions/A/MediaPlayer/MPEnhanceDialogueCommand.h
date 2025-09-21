@interface MPEnhanceDialogueCommand : MPRemoteCommand

@property (nonatomic, getter=isActive) BOOL active;

- (id)_mediaRemoteCommandInfoOptions;

@end
