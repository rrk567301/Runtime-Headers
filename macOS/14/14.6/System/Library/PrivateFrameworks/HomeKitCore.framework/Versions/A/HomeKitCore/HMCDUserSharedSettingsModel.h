@class NSUUID;

@interface HMCDUserSharedSettingsModel : NSManagedObject

@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic) BOOL isExplicitContentAllowed;
@property (nonatomic) BOOL isiTunesAccountAllowed;
@property (nonatomic) BOOL isDolbyAtmosEnabled;
@property (nonatomic) BOOL isLosslessMusicEnabled;
@property (nonatomic) BOOL isPlaybackInfluencesEnabled;
@property (nonatomic) BOOL isSiriIdentifyVoiceEnabled;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
