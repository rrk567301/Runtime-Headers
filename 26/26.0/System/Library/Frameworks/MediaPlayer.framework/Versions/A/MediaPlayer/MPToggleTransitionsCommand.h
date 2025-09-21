@interface MPToggleTransitionsCommand : MPRemoteCommand

@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) long long transitionStyle;

- (id)_mediaRemoteCommandInfoOptions;

@end
