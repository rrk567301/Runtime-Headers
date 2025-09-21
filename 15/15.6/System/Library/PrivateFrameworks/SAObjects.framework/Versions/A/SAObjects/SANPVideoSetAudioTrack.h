@class NSString;

@interface SANPVideoSetAudioTrack : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *desiredOptionId;
@property (copy, nonatomic) NSString *languageOptionChangeUserSetting;

+ (id)setAudioTrack;
+ (id)setAudioTrackWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
