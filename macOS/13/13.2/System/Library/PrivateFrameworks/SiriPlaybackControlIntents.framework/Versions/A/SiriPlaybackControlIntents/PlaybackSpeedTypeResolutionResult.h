@interface PlaybackSpeedTypeResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedPlaybackSpeedType:(long long)a0;
+ (id)confirmationRequiredWithPlaybackSpeedTypeToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
