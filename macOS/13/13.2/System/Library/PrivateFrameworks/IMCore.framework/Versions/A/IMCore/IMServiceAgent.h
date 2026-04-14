@class NSArray, NSDictionary;

@interface IMServiceAgent : NSObject

@property (retain, nonatomic) NSArray *myAvailableMessages;
@property (retain, nonatomic) NSArray *myAwayMessages;
@property (readonly, nonatomic) unsigned long long vcCapabilities;
@property (readonly, weak, nonatomic) NSDictionary *currentAVChatInfo;
@property (readonly, nonatomic) unsigned long long requestAudioReflectorStart;
@property (readonly, nonatomic) unsigned long long requestAudioReflectorStop;

+ (id)notificationCenter;
+ (id)imageNameForStatus:(unsigned long long)a0;
+ (id)sharedAgent;
+ (void)forgetStatusImageAppearance;
+ (id)imageURLForStatus:(unsigned long long)a0;
+ (void)setServiceAgentCapabilities:(long long)a0;
+ (long long)serviceAgentCapabilities;

- (id)notificationCenter;
- (id)serviceWithName:(id)a0;
- (id)myPictureData;
- (void)launchIfNecessary;
- (id)serviceWithNameNonBlocking:(id)a0;
- (unsigned long long)requestVideoStillForPerson:(id)a0;

@end
